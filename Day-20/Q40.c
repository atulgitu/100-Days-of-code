//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    char bin[50];
    int i;
    printf("Enter a binary number: ");
    scanf("%s", bin);

    for (i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
        else {
            printf("Invalid binary number");
            return 0;
        }
    }

    printf("%s", bin);
    return 0;
}
