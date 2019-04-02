#include <stdio.h>
#include <unistd.h>

int main()
{
  int n;
  char* message="Enter file name: ";
  char filename[25];
  write(1, message, 18);
  n=read(0, filename, 25);
  write(1, filename, n);
  filename[n]='\0';
  filename[n-1]='\0';
  printf("filename is \"%s\"\n", filename);
}

