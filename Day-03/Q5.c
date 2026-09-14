//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main() {
    int Temperature_in_Celsius,Temperature_in_Fahrenheit;
    printf("Enter the Temperature in Celsius: ");
    scanf("%d",&Temperature_in_Celsius);
    Temperature_in_Fahrenheit = Temperature_in_Celsius * 1.8 + 32;
    printf("Temperature in Fahrenheit = %.2d\n",Temperature_in_Fahrenheit);
    return 0;
}