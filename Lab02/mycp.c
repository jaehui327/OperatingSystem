#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define NAME_LENGTH 25
#define PERMS 0644

int main() {
    int f1, f2, n;
    int num1, num2;
    char buf[BUFSIZ];
    char in_file[NAME_LENGTH], out_file[NAME_LENGTH];
    
    write(1, "Enter source file name: ", 25);
    num1 = read(0, in_file , 25);
    in_file[num1-1] = '\0';
    write(1, "Enter destination file name: ", 30);
    num2 = read(0, out_file, 25);
    out_file[num2-1] = '\0';

    if ((f1 = open(in_file, O_RDONLY, 0)) == -1) {
        printf("can't open %s\n", in_file);
        return 1;
    }
    if ((f2 = open(out_file, O_RDWR|O_CREAT|O_TRUNC|O_EXCL, PERMS)) == -1){
        printf("can't creat %s\n", out_file);
        return 1;
    }
    while ((n = read(f1, buf, BUFSIZ)) > 0) {
        if (write(f2, buf, n) != n){
            printf("write errono");
            
        }
    }
    close(f1);
    close(f2);
    write(1, "Finished!\n", 14);
    return 0;
}
