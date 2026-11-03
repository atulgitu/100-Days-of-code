//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main() {
    int n,rev=0,digit;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0) {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
