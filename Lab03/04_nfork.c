#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
    int pid1, pid2;
    printf("--------------\n학번: 201601692\n이름: 김재희\n--------------\n");
    printf("[Parent] : Hello, world ! pid=%d ppid=%d\n", getpid(), getppid());
    if ((pid1=fork()) == 0) {
        printf("[Child 1] : Hello, world ! pid=%d ppid=%d\n", getpid(),
               getppid());
        exit(0); /* ① */
    }
    if ((pid2=fork()) == 0) {
        printf("[Child 2] : Hello, world ! pid=%d ppid=%d\n", getpid(),
               getppid());
//        exit(0); /* ② */
    }
}
