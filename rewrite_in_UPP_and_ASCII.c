//Rewrite a character, its ascii, and its uppercase
#include<stdio.h>

int main(void)
{
    char ch;
    char *ch_ptr = &ch;

    printf("Enter a character (in Lower case) : ");
    scanf("%c",ch_ptr);
    printf("\nEntered character is %c\n",*ch_ptr);
    printf("\nASCII value of entered character is %d\n",*ch_ptr);
    printf("\nThe UpperCase is %c\n",*ch_ptr-32 );
    
    return 0;
}