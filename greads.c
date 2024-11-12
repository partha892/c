// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int marks;
    printf("enter marks (0-100): \n");
    scanf("%d",&marks);
    if(marks >=0 && marks <=30){
        printf("your gread is C");
    }else if(marks >=31 && marks <=70){
        printf("your gread is B");
    }
    else if(marks >=71 && marks <=90){
        printf("your gread is A");
    }
    else if(marks >=91 && marks <=100){
        printf("your gread is A++");
    }else
    printf("wrong number write a valid number 0-100");



    return 0;
}