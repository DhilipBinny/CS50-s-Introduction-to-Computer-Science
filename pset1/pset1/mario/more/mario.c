#include <stdio.h>
#include <cs50.h>

int main (void)

{
int n;
do
    {
        n = get_int("Height: ");
    }
    //while (n lies between 1 and 23);
    while (n>23 || n<0);


for (int i=0; i<n; i++)
    {
        //loop for spaces to be printed
        for (int j=n-1-i; j>0; j--){
        printf(" ");
        }

        //loop for hashes
        for (int k=-1; k<i; k++){
        printf("#");
        }

        // loop for spaces
        // for (l=0; l<2, l++)
        // {
        printf("  ");
        // }

        for (int m=0; m<=i ; m++)
        {
         printf("#");
        }

        printf("\n");
    }
}
