// add two floating point digits
#include<stdio.h>
void main(){
    float a,b,c;
    float *x,*y,*z;
    x = &a; 
    y = &b;
    z = &c;
     printf("\nEnter first number : ");
    scanf("%f",x);
     printf("\nEnter second number : ");
    scanf("%f",y);

    *z = *x + *y;  //dereferencing of pointers (value at address)

    printf("\nSum is %.2f\n",*z);

}