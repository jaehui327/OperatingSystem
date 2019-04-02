#include <stdio.h>
#include <unistd.h>
int main()
{
    int pid;
    printf("pid=%d One\n", getpid());
    pid = fork();
    printf("pid=%d Two\n", getpid());
    
}
