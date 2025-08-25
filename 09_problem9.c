/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    //  p denotes principle amount
    int p;
    printf("Give a value to p\n");
    scanf("%d", &p);
    // r denotes rate of interest in %
    float r;
    printf("Give a value to r\n");
    scanf("%f", &r);
    // t denotes time (in year)
    int t;
    printf("Give a value to t\n");
    scanf("%d", &t);

    float simple_interest = (p * r * t) / 100;
    printf("Simple interest is %f\n", simple_interest);

    // n denotes no. of times that interest is compounded per year
    int n;
    printf("Give a value to n");
    scanf("%d", &n);

    float compound_interest = p * pow((1 + r / (100 * n)), n * t);
    printf("compound interest is %f\n", compound_interest);

    return 0;
}