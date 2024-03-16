#include <stdio.h>
#include<string.h>
#include "cs50.h"

//gcc -o get-input  get-input.c cs50.c


int main(void)
{
    
    char isim[30]; // 30 represents the letters limit of firstname . 
    printf("Enter your first name :");
    scanf("%s",isim);
    
    
    if(strcmp(isim ,"omer")== 0)
    {
        printf("welcome %s \n" ,isim);
    }
    else
    {
        printf("I do not know you \n");
    }
    return 0;

    
}

