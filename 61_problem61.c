#include<stdio.h>

int main(){
    int n;
    printf("Enter an element for search\n");
    scanf("%d", &n);

    int arr1[] = {1,2,3,4,5,6};
    for (int i = 0; i <5; i++)
    {
        int arr1[i];
        if (arr1[n] == arr1[i])
        {
            printf("%d",arr1[i]);
        }
        
    }
    
    return 0;
}