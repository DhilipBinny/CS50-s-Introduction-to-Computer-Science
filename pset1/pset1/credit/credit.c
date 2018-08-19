#include <stdio.h>
#include <cs50.h>

int main (void)
{

long long card_no,i,j,t;
int count,k,s,y,v,u,n,sum,sum_2,total_sum;

int extracted_list[100], remainig_ist[100],a_array[100],b_array[100];

    do
    {
    card_no = get_long_long("Number: ");
    }

    while (card_no < 0);

    // count the total number of digits in the user inpur
    for ( count=0, i=card_no; i>0; i=(i/10))
    {
        count=count+1;
    }

    // printf("%i\n",count);

    // make an array of elements from the 2nd to tha last, alternative digits

    if (count%2 != 0)
        {
            for(k=0,j=card_no/10;j>0;j=j/10)
            {
                extracted_list[k]=j%10;
                k=k+1;
                j=j/10;
            }
        }
        else
        {
            for(k=0,j=card_no;j>0;j=j/10)
            {
                extracted_list[k]=j%10;
                k=k+1;
                j=j/10;
            }
        }
    // make an array of elements for remaining digits
    if (count%2 != 0)
        {
            for(s=0,t=card_no;t>0;t=t/10)
            {
                remainig_ist[s]=t%10;
                s=s+1;
                t=t/10;
            }
        }
        else
        {
            for(s=0,t=card_no/10;t>0;t=t/10)
            {
                remainig_ist[s]=t%10;
                s=s+1;
                t=t/10;
            }
        }

    // //output each array extracted_list element's value /
    // for (m = 0; m < k; m++ )
    // {
    //   printf("Element[%d] = %d\n", m, extracted_list[m]);
    // }
    // printf("\n");

    // asigniing elements of extracted_list by a multplycation factor 2
    for(n=0; n<k; n++ )
    {
        a_array[n]=extracted_list[n]*2;
    }

    // // output each a_array element's value
    // for (x = 0; x< k; x++ )
    // {
    //   printf("Element[%d] = %d\n", x, a_array[x] );
    // }
    // printf("\n");


    // doubling elements of a_array
    for (y = 0; y< k; y++ )
    {
        if  (a_array[y]/10 != 0)
        {
            b_array[y] = a_array[y]/10 + a_array[y]%10;
        }
        else
        {
            b_array[y]=a_array[y];
        }
    }

    // //output each b_array element's value

    // for (z = 0; z< k; z++ )
    // {
    //   printf("Element[%d] = %d\n", z, b_array[z] );
    // }
    // printf("\n");

    // print sum off b_array
    for (sum=0,v = 0; v< k; v++ )
    {
      sum = sum + b_array[v];
    }

    // printf("the sum is %i\n",sum);
    // printf("\n");


    // // print remainig_ist elements
    // for (v = 0; v< k+1; v++ )
    // {
    //   printf("Element[%d] = %d\n", v, remainig_ist[v] );
    // }


    // sum of remaining_list and b_array
    for (sum_2=0,u = 0; u< k+1; u++ )
    {
      sum_2 =  sum_2 +remainig_ist[u];
    }

    // printf("the sum is %i\n",sum_2);
    // printf("\n");


    total_sum = sum +sum_2;
    // printf("the sum is %i\n",total_sum);
    // printf("\n");

    // if (total_sum%10 == 0 )
    // {
    //     check_sum=true;
    // }
    // else
    // {
    //     check_sum=false;
    // }

    // if (check_sum ==true)
    // {
    // printf("Check_sum is valid\n");
    // }
    // else{
    //     printf("Check_sum is invalid\n");
    // }


    // check to see if the given number is in the appropriate range
    if ( total_sum % 10 == 0 )
        {
            if ( (card_no >= 340000000000000 && card_no < 350000000000000) || (card_no >= 370000000000000 && card_no < 380000000000000) )
                printf("AMEX\n");
            else if ( card_no >= 5100000000000000 && card_no < 5600000000000000 )
                printf("MASTERCARD\n");
            else if ( (card_no >= 4000000000000 && card_no < 5000000000000) || (card_no >= 4000000000000000 && card_no < 5000000000000000) )
                printf("VISA\n");
            else
                printf("INVALID\n");
        }
        else
            printf("INVALID\n");
}