//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main() {
    int Time_In_Seconds,hours,minutes,seconds;
    printf("Enter the Time in seconds : ");
    scanf("%d",&Time_In_Seconds);
    hours = Time_In_Seconds / 3600;
    minutes = (Time_In_Seconds % 3600) / 60;
    seconds = (Time_In_Seconds % 3600) % 60;
    printf("%d:%d:%d:",hours,minutes,seconds);
    return 0;

}