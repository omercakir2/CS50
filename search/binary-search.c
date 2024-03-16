#include <stdio.h>
#include <math.h>
#include "cs50.h"


int find_index(int arr[] , int number , int numberOfElements)
{
    for (int i = 0; i < numberOfElements; i++)
    {
        if (arr[i]==number)
        {
            return i;
        }
        
        
    }
    return 404; 
}


int main() 
{
    int deneme = round(4.5);
    printf("deneme %d \n" , deneme);
    
    int myArray[] = {1, 2, 3, 4, 5,6,7,8,9,10,11,12,13};
    int numElements = (sizeof(myArray) / sizeof(myArray[0]));
    printf("Number of elements in the array: %d\n", numElements);

    int number = get_int("Type the number you are looking for : ");
    // int a = find_index(myArray,number,numElements);
    // printf("index of the number is %d \n",a);

    int first_index = 0;
    int last_index = numElements - 1;

    int middle_index = round((first_index+last_index)/2);

    while (first_index <= last_index)
    {
        printf("first_index:%d, last_index:%d , middle_index:%d \n", first_index, last_index, middle_index);

        if (myArray[middle_index]==number)
        {
            printf("The number you are searching is in the list");
            return 0;
        }
        else if (number > myArray[middle_index])
        {
            first_index = middle_index+1;
            middle_index = round((first_index+last_index)/2);
        }
        else
        {
            last_index = middle_index-1;
            middle_index = round((first_index+last_index)/2);
        } 
    }

    if (myArray[first_index] == number){
        printf("The number you are searching is in the list");
        return 0;
    }

}
