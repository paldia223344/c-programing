/*
Q17: Write a program to find the roots of a quadratic equation and categorize them.

*/

#include <stdio.h>

int main()
{
    int x, b, c, a;
    printf("Enter value of x\n");
    scanf("%d", &x);

    printf("Enter value of b\n");
    scanf("%d", &b);

    printf("Enter value of c\n");
    scanf("%d", &c);

    printf("Enter value of a\n");
    scanf("%d", &a);

  int root1= (b*b - 4*a*c);
  int power1= (root1 , 1/2);
    int root1_of_equation = ((x + root1) / 2 * a);

    printf("The  first root of the quadratic equation will be : %d\n", root1_of_equation);


    int root2_of_equation = ((-x + power1) / 2 * a);
    
    printf("The  second root of the quadratic equation will be : %d\n", root2_of_equation);
    return 0;
}