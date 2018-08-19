#include <stdio.h>
#include <cs50.h>

int main (void)

{
int n;
    do
    {
        n = get_int("Height: ");
    }
    //while (n<=23);
    while (n>23 || n<0);


    for (int i=0; i<n; i++)
     {

           //loop for spaces to be printed
           for (int j=n-1-i; j>0; j--){
           printf(" ");
           }

           //loop for hashes
           for (int k=-2; k<i; k++){
           printf("#");
           }

           printf("\n")   ;
       }
}
