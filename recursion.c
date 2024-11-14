// Online C compiler to run C program online
#include <stdio.h>
void hello(int count);
int main() {
   
   //int count=10;
   hello(10);
    return 0;
}

void hello(int count){
    if(count==0){
        return;
    }
    printf("hellow world\n");
    hello(count-1);
}