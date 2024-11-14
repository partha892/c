// Online C compiler to run C program online
#include <stdio.h>
int mul(int a ,int b);
int main() {
    int a,b;
   printf("enter 1st number\n");
   scanf("%d",&a);
    printf("enter 2nd number\n");
   scanf("%d",&b);
   int m = mul(a,b);
   printf("%d",m);

    return 0;
}

int mul(int a,int b){
    return a*b;
}