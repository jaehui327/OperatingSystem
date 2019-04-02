#include <stdio.h>
#include <stdlib.h>
main(int argc, char *argv[]) {
    int i, j, k;
    for(i = 1; i < argc; i++)
        if(argv[i][0] == '-')
            for(j=0; j < atoi(argv[i]+1); j++)
                for(k=2; k < argc; k++)
                    printf("%s%s", argv[k], (i<argc-1)? " " : "");
    printf("\n");
    return 0;
}
