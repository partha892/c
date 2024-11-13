// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int input;
  printf("enter number \n");
  scanf("%d",&input);
  int fact = 1;
  for (int i=1;i<=input;i++){
      fact=fact*i;
      
  }
  printf("%d",fact);
}