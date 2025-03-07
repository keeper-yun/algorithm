#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
#include "kernel/fcntl.h"

#define BUF_SIZE 512

void copy(int src_fd, int dest_fd) {
    char buf[BUF_SIZE];
    int n;

    while ((n = read(src_fd, buf, sizeof(buf))) > 0) {
        if (write(dest_fd, buf, n) != n) {
            printf("cp: error writing to destination file\n");
            exit(1);
        }
    }
    if (n < 0) {
        printf("cp: error reading from source file\n");
        exit(1);
    }
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: cp <source> <destination>\n");
        exit(1);
    }

    int src_fd = open(argv[1], O_RDONLY);
    if (src_fd < 0) {
        printf("cp: cannot open source file %s\n", argv[1]);
        exit(1);
    }

    int dest_fd = open(argv[2], O_WRONLY | O_CREATE);
    if (dest_fd < 0) {
        printf("cp: cannot open destination file %s\n", argv[2]);
        close(src_fd);
        exit(1);
    }

    copy(src_fd, dest_fd);

    close(src_fd);
    close(dest_fd);
    
    exit(0);
}

