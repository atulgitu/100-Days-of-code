//Q47: Write a program to print the following pattern:
//*
//**
//***
//****
//*****

/*
Sample Test Cases:
Input 1:
(No input)
Output 1:
*
**
***
****
*****

*/
#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
