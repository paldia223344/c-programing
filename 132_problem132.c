/*
Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
 #include<stdio.h>
 #include<string.h>
 enum trafficRules{
    RED ,
    YELLOW ,
    GREEN ,
 };
 int main(){
    char word[100];
    printf("Enter any color of the traffic light\n");
    scanf("%s",word);

    enum trafficRules light;
    if (strcmp(word,"RED") == 0)
    {
        light = RED;
    }else if (strcmp(word,"YELLOW") == 0)
    {
        light = YELLOW;
    }else if (strcmp(word,"GREEN") == 0)
    {
        light = GREEN;
    }else{
        printf("invalid input\n");
    }
    

    switch (light)
    {
    case RED:
    printf("Stop\n");
      break;
    
      case YELLOW:
    printf("wait\n");
      break;
   
       case GREEN:
    printf("go\n");
   
      break;
    }

    return 0;
 }
