//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main() {
    char name[100];
    int i;
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' ')) {
            if (name[i] >= 'a' && name[i] <= 'z')
                printf("%c.", name[i] - 32);
            else
                printf("%c.", name[i]);
        }
    }

    return 0;
}
