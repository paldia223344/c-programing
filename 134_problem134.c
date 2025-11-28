
/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/


 #include<stdio.h>
  enum message{
    SUCCESS,
    FAILURE,
    TIMEOUT,
  };
 int main(){
    printf("Enter any (SUCCESS,FAILURE and TIMEOUT) message \n");

    switch (message)
    {
    case SUCCESS:
        printf("Opearyion successful\n");
        break;
    
    case FAILURE:
        printf("Opearyion failed\n");
        break;

         case TIMEOUT:
        printf("late\n");
        break;

        default:
        printf("Incorrect input\n");
        
    }
    return 0;
 }