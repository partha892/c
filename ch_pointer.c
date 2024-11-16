// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int x;
   int *pointer ;
   pointer = &x;
   *pointer =0;
   printf("%d\n",x);
   printf("%d\n",*pointer);
   *pointer = *pointer+5;
    printf("%d\n",x);
   printf("%d\n",*pointer);
   
    return 0;
}