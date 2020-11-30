//Enter a character and determine whether it is vowel or consonent
#include<stdio.h>

int main(void)
{   
    
    int a;
    printf("\nDo you want to start (Press any integer to continue OR 0 to exit) : ");
    scanf("%d",&a);
    while(a != 0){
 
    char c;
  
    char *ch_ptr;
    printf("Enter a character : ");
    scanf(" %c",&c);
    ch_ptr = &c;
    if( *ch_ptr == 'a' ||*ch_ptr == 'e' ||*ch_ptr == 'i' ||*ch_ptr == 'o' ||*ch_ptr == 'u' ||*ch_ptr == 'A' ||*ch_ptr == 'E' ||*ch_ptr == 'I' ||*ch_ptr == 'O' ||*ch_ptr == 'U'){
        printf("\n%c is a vowel\n",*ch_ptr);
    }
    else{
        printf("\n%c is a consonent\n",*ch_ptr);
    }
    printf("\nStill want to continue. Enter 0 to exit :");
    scanf("%d",&a);
    }
    return 0;
}