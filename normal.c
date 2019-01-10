#include<stdio.h>
#include<stdlib.h>
struct folder{
  int n;
  char b;
  double c;
}files;

void main()
{

    printf("size is %ld\n",sizeof(files.n));
    printf("size is %ld\n",sizeof(files.b));
    printf("size is %ld\n",sizeof(files.c));
    printf("size is %ld\n",sizeof(files));
        
  
}
