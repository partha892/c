// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int age ;
   printf("enter your age :\n");
   scanf("%d",&age);
   if( age > 0){
       printf("you are posative your age : %d",age);
       if(age % 2 == 0){
           printf("\n  even");
       }else{
           printf("\n odd");
       }
   }else{
       printf("nagative");
   }

    return 0;
}