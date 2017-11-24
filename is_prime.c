
/*                    magshimim 24.11.2017                        */
/* program prints and counts number of primes from 1 to MAX_PRIME */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MAX_PRIME 1000
#define EVEN_PRIME 2

int is_prime(int number_to_be_checked); //function decleration

int main()
{
    int i = 0;      //loop index
    int count = 0;      //counts number of primes found
    
    for (i=2; i<MAX_PRIME; i++)
    {
        if (is_prime(i))       //send number to function
        {
            printf("%d ",i);    //print prime
            count++;            //count prime
        }
    }    
    
    printf("\nTotal number of primes: %d\n",count);
    
    return 0;
}



/******************************************************
 * input: number to be checked whether is prime       *
 * output: true if number is prime, false otherwise   *
 ******************************************************/
int is_prime(int number_to_be_checked)
{
    int i=0; //loop index
    
    if (number_to_be_checked == EVEN_PRIME) //if the number is 2
    {
        return TRUE;
    }
    
    if (number_to_be_checked%2 == 0)        //if the number is even
    {
        return FALSE;
    }
    
    for (i=3; i<number_to_be_checked/2; i+=2)   //looking for deviders
    {
        if (number_to_be_checked%i == 0)        //if i devides number 
        {
            return FALSE;
        }
    }
    
    return TRUE;        //no deviders were found (number is prime)
}
