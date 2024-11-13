// Online C compiler to run C program online
#include <stdio.h>

int main() {
   do {int n;
   printf("enter number \n");
   scanf("%d",&n);
   printf("%d",n);
   if(n%2 == 0){
       break;
   }
   }while(1);
   printf("thank you");
    return 0;
}