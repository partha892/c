// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int user;
    printf("enter yourn number\n");
    scanf("%d",&user);
    int div;
   
    int i;
    for(i=user;i>=0;i--){
         div = div-i;
    }
   printf("your sum is %d\n",div);
    return 0;
}