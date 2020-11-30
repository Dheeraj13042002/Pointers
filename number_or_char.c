//WAP to check whether user given a input is a number or character
#include<stdio.h>

int main(void)
{
     
    int b;
    printf("Do you want to start : ");
    scanf("%d",&b);
    while(b){ 
    char a;
    char *ptr_a;
    ptr_a = &a;
    printf("\nEnter a number or a character (Press any number to continue and 0 to exit): ");
    scanf(" %c",ptr_a);

   if(*ptr_a >='A' && *ptr_a <='Z'){
        printf("\nYou have entered a Uppercase character\n");
    } 
    
    if(*ptr_a >='a' && *ptr_a <='z'){
        printf("\nYou have entered a lowercase character\n");
    }  
    else if(*ptr_a >='0' && *ptr_a <='9'){
        printf("\nYou have entered a number\n");
    }

    printf("\nStill want to continue. Press 0 to continue : ");
    scanf("%d",&b);
     } 
    return 0;
}