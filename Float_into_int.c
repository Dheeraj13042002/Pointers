// Convert a floating number into integer
#include<stdio.h>

int main(void)
{   
    float a;
    int b;
    float *ptr;
    int *b_ptr = &b;
    ptr = &a;

    printf("\nEnter a number : ");
    scanf("%f",ptr);
    *b_ptr =(int)*ptr;
    printf("The integer equivalent to %f is %d ",*ptr,*b_ptr);
    return 0;
}