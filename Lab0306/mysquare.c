#include <stdio.h>
#include <stdlib.h>
main(int argc, char *argv[])
{
    int i;
    for(i=1; i<argc; i++)
    {
        printf("%s%s", argv[i], (i<argc-1)? " " : "");
        if(argv[i][0] == '-')
            printf(" : squared value is %d ", (atoi(argv[i]+1))*(atoi(argv[i]+1)));
    }
    printf("\n");
    return 0;
}
