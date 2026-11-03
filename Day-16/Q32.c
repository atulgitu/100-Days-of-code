//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    int n, original, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (original == rev)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
