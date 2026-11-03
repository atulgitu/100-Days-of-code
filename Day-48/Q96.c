//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main() {
    char str[200];
    int i, j, start = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {
            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] != ' ')
                break;
            printf(" ");
            start = i + 1;
        }
    }

    return 0;
}
