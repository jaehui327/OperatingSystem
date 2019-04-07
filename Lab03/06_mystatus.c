#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
int main ()
{
    int pid, status, childPid;
    printf("-------------\n학번: 201601692\n이름: 김재희\n--------------\n");
    printf ("I'm the parent process and my PID is %d\n", getpid ());
    pid = fork (); /* Duplicate */
    if (pid != 0) /* Branch based on return value from fork () */
    {
        printf ("I'm the parent process with PID %d and PPID %d\n", getpid (), getppid ());
        childPid = wait (&status); /* Wait for a child to terminate. */
        printf ("A child with PID %d, terminated with exit code high: %d, low: %d\n", childPid, status >> 8,
                status & 0xFF); /* Linux */
    }
    else
    {
        printf ("I'm the child process with PID %d and PPID %d\n", getpid (), getppid ());
        /* execlp ("ls", "ls", "-li", (char *)0); */
        /* execlp ("./myexit", "./myexit", (char *)0); */
        exit (42); /* Exit with a silly number */
    }
    printf ("PID %d terminates\n", getpid () );
}
