#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]) {
    int fds1[2], fds2[2]; // fds1: 子->父, fds2: 父->子
    pipe(fds1);
    pipe(fds2);

    int pid = fork();
    if (pid == 0) { // 子进程
        close(fds1[0]); // 关闭子进程不需要的读端
        close(fds2[1]); // 关闭子进程不需要的写端

        // 1. 子进程发送消息 "v我￥50"
        char *msg1 = "v我￥50";
        write(fds1[1], msg1, strlen(msg1));
        
        // 2. 子进程等待父进程回复
        char recv_msg[512] = {0};
        read(fds2[0], recv_msg, 512);
        printf(1, "子进程收到：%s\n", recv_msg);

        // 3. 子进程发送确认 "父亲收到了"
        char *msg2 = "父亲收到了";
        write(fds1[1], msg2, strlen(msg2));

        // 关闭管道
        close(fds1[1]);
        close(fds2[0]);
    } else { // 父进程
        close(fds1[1]); // 关闭父进程不需要的写端
        close(fds2[0]); // 关闭父进程不需要的读端

        // 读取子进程的消息
        char recv_msg[512] = {0};
        read(fds1[0], recv_msg, 512);
        printf(1, "父进程收到：%s\n", recv_msg);

        // 回复 "给你￥5000"
        char *reply_msg = "给你￥5000";
        write(fds2[1], reply_msg, strlen(reply_msg));

        // 读取子进程的最终确认消息
        char confirm_msg[512] = {0};
        read(fds1[0], confirm_msg, 512);
        printf(1, "父进程收到：%s\n", confirm_msg);

        // 关闭管道
        close(fds1[0]);
        close(fds2[1]);

        wait(); // 等待子进程结束
    }

    exit();
}
