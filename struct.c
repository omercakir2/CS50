#include <stdio.h>
#include <string.h>
#include "cs50.h"

typedef struct
{
    char name[20];
    char number[20];
}
person;

int main (void)
{
    person people[2];
    printf("Name: ");
    scanf("[^" , people[0].name);
    printf("%s's number : " , people[0].name);
    scanf("%s" , people[0].number);
    printf("%s \n" , people[0].number);
}