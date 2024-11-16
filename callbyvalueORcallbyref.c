#include <stdio.h>

// Function prototypes
void squar(int num);      // Function to square a number (pass by value)
void _squar(int *num);    // Function to square a number (pass by reference)

int main() {
    int number = 30;
    
    // Call squar (pass by value)
    squar(number);
    printf("\nAfter squar (pass by value), number = %d\n", number);

    // Call _squar (pass by reference)
    _squar(&number);
    printf("After _squar (pass by reference), number = %d\n", number);

    return 0;
}

// Function to square a number (pass by value)
void squar(int num) {
    num = num * num;
    printf("Inside squar (pass by value), squared = %d\n", num);
}

// Function to square a number (pass by reference)
void _squar(int *num) {
    *num = (*num) * (*num);
    printf("Inside _squar (pass by reference), squared = %d\n", *num);
}
