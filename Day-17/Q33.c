//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
int main() {
    int n,original,temp,digits=0,digit,i,power,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    original=n;
    temp=n;
    while(temp>0) {
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0) {
        digit=temp%10;
        power=1;
        for(i=1;i<=digits;i++) {
            power=power*digit;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
