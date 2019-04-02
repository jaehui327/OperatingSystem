#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main () {
    int pid;
    pid = fork (); /* Duplicate */
    if (pid != 0) /* Branch based on return value from fork () */
    {
        while (1) /* Never terminate, and never execute a wait () */
            sleep (1000);
    }
    else
    {
        exit (42); /* Exit with a silly number */
    }
}
