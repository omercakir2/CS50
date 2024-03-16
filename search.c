#include <stdio.h>
#include <string.h>

int main(void)
{
    int list[] = {1,2,34,23,532,312,5123,123,1234,1234};
    int number ;
    printf("Number :");
    scanf("%i" , &number);
    printf("%i \n" , number);

    for(int i = 0 ; i < 10 ;i++ )
    {
        if (list[i]== number)
        {
            printf("found \n");
            return 0;

        }

    }
    printf("not found \n");
    return 1 ;

}
