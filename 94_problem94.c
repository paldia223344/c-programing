/*
Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
 #include<stdio.h>
 
 int main(){
    char str[] = " I love programming";
    int count= 0, k, j;
    int i= 0,count1, count2, count3;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }else{
            count1 = count++;
        } 
    }

     for ( j =i+ count1; str[j] != '\0'; j++)
    {
        if (str[j] == ' ')
        {
            continue;
        }else{
            count2 = count++;
        } 
    }
    
    
     for ( k = j ; str[k] != '\0'; k++)
    {
        if (str[k] == ' ')
        {
            continue;
        }else{
            count3 = count++;
        } 
    }
    

     if (count3 > count2 && count1 < count3)
     {
        printf("count3");
     }else{
return 0;
     }
     
    return 0;
 }