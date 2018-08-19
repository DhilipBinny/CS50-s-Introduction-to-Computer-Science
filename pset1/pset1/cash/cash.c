

#include <stdio.h>
#include <cs50.h>
#include <math.h>

// declaring the function name here , so that the compiler knows that a function exists
int GetCoins(int);

int main(void)

{
    float n;
    int cents;
    do
        {
            n = get_float("Oh hai! How much change is owed?\n");
        }

        while (n < 0);

    cents = round(n * 100);

    printf("%i\n", GetCoins(cents));

}

// function getcoins
int GetCoins(int z)
{
    int counter = 0;
    if(z >= 25)
    {
        counter = counter + (z / 25);
        // printf("no of 25's use : %i\n", (z/25));
        z = z % 25;
    }
    if(z >= 10)
    {
        counter = counter + (z / 10);
        // printf("no of 10's use : %i\n", (z/10));
        z = z % 10;
    }
    if(z >= 5)
    {
        counter = counter + (z / 5);
        // printf("no of 5's use : %i\n", (z/5));
        z = z % 5;
    }
    if(z >= 1)
    {
        counter = counter+z;
        // printf("no of 1's use : %i\n",z);
    }
    return counter;
}