//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k, len, first = 1;
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (first == 0)
                printf(",");
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }

    return 0;
}
