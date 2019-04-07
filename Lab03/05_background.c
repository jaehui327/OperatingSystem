#include <stdio.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
    printf("--------------\n학번: 201601692\n이름: 김재희\n--------------\n");
    if (fork () == 0) /* Child */
    {
        execvp (argv[1], &argv[1]); /* Execute other program */
        fprintf (stderr, "Could not execute %s\n", argv[1]);
    }
}
