//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
int main() {
    float r,Area,Circumference;
    printf("Enter the value of r ");
    scanf("%f",&r);
    Area=3.14*r*r;
    Circumference=2*3.14*r;
    printf("Area = %.2f \n",Area);
    printf("Circumference = %.2f \n",Circumference);
    return 0;
}