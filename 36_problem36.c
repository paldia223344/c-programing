/*
Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/

#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number:  ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {

            printf(" %d  \n", i);
        }
    }

    int j;
    printf("Enter a number:  ");
    scanf("%d", &j);
    for (int k = 1; k <= j; k++)
    {
        if (n % k == 0)
        {

            printf(" %d  \n", k);
        }
    }
    
    int m ;
    printf("Enter the numbers which are common to both");
    scanf("%d", &m);
    printf("The highest common factors are: ");
    printf("%d", m;
    )

    return 0;
}