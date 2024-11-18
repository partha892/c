// Online C compiler to run C program online
#include <stdio.h>
void mul(int a );
int main() {
    int a;
   printf("enter 1st number\n");
   scanf("%d",&a);
  
  mul(a);

    return 0;
}

void mul(int a){
   for(int i=1;i<=10;i++){
       printf("%d\n",i*a);
   }
}