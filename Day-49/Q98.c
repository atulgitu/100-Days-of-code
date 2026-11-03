//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len, last = 0;
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    // find where the surname (last word) starts
    for (i = 0; i < len; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
            last = i;
    }

    for (i = 0; i < last; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
            printf("%c.", name[i]);
    }

    if (last > 0)
        printf(" ");
    printf("%s", &name[last]);

    return 0;
}
