#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int main ()
{
    void (*oldHandler) (); /* To hold old handler value */
    printf ("I can be Control-C’ed\n");
    sleep (5);
    oldHandler = signal (SIGINT, SIG_IGN); /* Ignore Control-C */
    printf ("I’m protected from Control-C now\n");
    sleep (5);
    signal (SIGINT, oldHandler); /* Restore old handler */
    signal (SIGINT, SIG_DFL); /* Restore default handler */
    printf ("I can be Control-C’ed again\n");
    sleep (5);
    printf ("Bye!\n");
}
