// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int user;
    printf("enter yourn number\n");
    scanf("%d",&user);
    int sum;
   
    int i;
    for(i=0;i<=user;i++){
         sum = sum+i;
    }
   printf("your sum is %d\n",sum);
    return 0;
}