//Biggest number of three numbers
#include<stdio.h>

int main(void)
{
    int a,b,c;
    int *x = &a ,*y = &b , *z = &c;

    printf("Enter three numbers : ");
    scanf("%d %d %d",x,y,z);

    if(*x > *y){
        if(*x > *z){
            printf("%d is greatest",*x);
        }
        else{
            printf("%d is geatest",*z);
        }
    }
    else{
        if(*y > *z){
            printf("%d is greatest",*y);
        }
        else{
            printf("%d is greatest",*z);
        }
    }
    return 0;
}