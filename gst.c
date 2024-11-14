// Online C compiler to run C program online
#include <stdio.h>
 void gst(float value);
 
int main() {
    float value= 200.0;
    gst(value);

    return 0;
}
void gst(float value){
   float values= value+(0.28*value);
    printf("%f",values);
    
}