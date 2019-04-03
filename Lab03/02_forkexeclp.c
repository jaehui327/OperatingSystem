#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{
    int pid;
    printf("-------------------\n학번: 201601692\n이름: 김재희\n-------------------\n");
    /* fork another process */
    pid = fork();
    if(pid < 0) { /* error occurred */
        fprintf(stderr, "Fork Failed");
        exit(-1);
    } else if (pid == 0) { /* child process
                            */
        execl("/bin/ls", "ls", "-l", NULL);
    } else { /* parent process */
        wait(NULL);
        printf("Child Complete\n");
        exit(0);
    }
}
