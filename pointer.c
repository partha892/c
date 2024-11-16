// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int age=22;
   int *pointer = &age;
   int _age = *pointer;
   
   printf("%d",_age);
    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int age=22;
   int *pointer = &age;
   int _age = *pointer;
   
   printf("%d \n",age);
   printf("%d\n",*pointer);
    printf("%d",*(&age));
    return 0;
}