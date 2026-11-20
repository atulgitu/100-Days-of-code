//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>
#include <string.h>
enum role {ADMIN,USER,GUEST};
int main() {
    char str[20];
    enum role r;
    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%s",str);
    if(strcmp(str,"ADMIN")==0)
        r=ADMIN;
    else if(strcmp(str,"USER")==0)
        r=USER;
    else if(strcmp(str,"GUEST")==0)
        r=GUEST;
    else {
        printf("Invalid role");
        return 0;
    }
    switch(r) {
        case ADMIN:
            printf("Welcome Admin! You have full access.");
            break;
        case USER:
            printf("Welcome User!");
            break;
        case GUEST:
            printf("Welcome Guest!");
            break;
    }
    return 0;
}
