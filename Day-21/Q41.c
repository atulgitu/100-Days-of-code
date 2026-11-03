//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int n, first, last, temp, p = 1, middle, result;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("%d", n);
        return 0;
    }

    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        p = p * 10;
    }
    first = temp;

    middle = (n % p) / 10;
    result = last * p + middle * 10 + first;

    printf("%d", result);
    return 0;
}
