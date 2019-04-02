#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define PERMS 0644 
int main(int argc, char *argv[])
{
        int f1, f2, n;
        char buf[BUFSIZ];

        if (argc != 3)
                printf("Usage: %s a b\n", argv[0]);
        if ((f1 = open(argv[1], O_RDONLY, 0)) == -1)
                printf("can't open %s\n", argv[1]);
        if ((f2 = open(argv[2], O_RDWR|O_CREAT|O_TRUNC|O_EXCL, PERMS)) == -1)
                printf("can't creat %s\n", argv[2]);
        while ((n = read(f1, buf, BUFSIZ)) > 0)
                if (write(f2, buf, n) != n)
                        printf("write errono\n");
        close(f1);
        close(f2);
        exit(0);
}

