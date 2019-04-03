#include <stdio.h>
#include <unistd.h>
int main() {
    int pid;
    printf("-------------------\n학번: 201601692\n이름: 김재희\n-------------------\n");
    printf("pid=%d One\n", getpid());
    pid = fork();
    printf("pid=%d Two\n", getpid());
    return 0;
}
