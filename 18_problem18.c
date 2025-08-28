/*
Q18: Write a program to assign grades based on a percentage input.

*/
 #include<stdio.h>
 
 int main(){

    int marks_in_maths,marks_in_physics,marks_in_programming;

    printf("Enter your marks in maths  :\n");
    scanf("%d",&marks_in_maths);

    printf("Enter your marks in physics  :\n");
    scanf("%d",&marks_in_physics);

    printf("Enter your marks in programming  :\n");
    scanf("%d",&marks_in_programming);

    int percentage =  ((marks_in_maths+ marks_in_physics + marks_in_programming)/3) *100;
   if (percentage>= 95)
   {
    printf("GRADE A");
   } else if(percentage<95 && percentage>= 82)
   {
    printf("GRADE B");
   }
   else if(percentage<82 && percentage>= 68)
   {
    printf("GRADE D");
   }
   else 
   {
    printf("GRADE F");
   }
   
    return 0;
 }
