/*
Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

*/

#include <stdio.h>

int main()
{
    int time_in_second;
    printf("Enter  a time in second\n");
    scanf("%d", &time_in_second);

    float time_second_to_hours = time_in_second * (1 / 3600);
    float time_second_to_minutes = time_in_second * (1 / 60);

    printf(" time  in seconds  :  %d\n", time_in_second);
    printf(" time  in minutes  :  %f\n", time_second_to_minutes);
    printf(" time  in hours  :  %f\n", time_second_to_hours);
    return 0;
}