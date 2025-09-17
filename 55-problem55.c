 /*
 Q55: Write a program to print all the prime numbers from 1 to n.


Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19
 
 */
 #include<stdio.h>
 
 int main(){
    int n ;
    printf("Enter a number to what extent you want to print all prime numbers");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        
         for (int i = 2; i <= n; i++)
         {
            if (i == 1)
        {
            continue;
            if (i %2 == 0)
            {
                continue;
                if (n == 2)
                {
                    printf("%d", 2);
                }
               printf("%d", i); 
            }
        }
            
            
         }
         
        
    }
    
    return 0;
 }