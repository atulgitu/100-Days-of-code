//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>
enum status {SUCCESS,FAILURE,TIMEOUT};
int main() {
    char str[20];
    enum status s;
    printf("Enter status (SUCCESS/FAILURE/TIMEOUT): ");
    scanf("%s",str);
    if(strcmp(str,"SUCCESS")==0)
        s=SUCCESS;
    else if(strcmp(str,"FAILURE")==0)
        s=FAILURE;
    else if(strcmp(str,"TIMEOUT")==0)
        s=TIMEOUT;
    else {
        printf("Invalid status");
        return 0;
    }
    switch(s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }
    return 0;
}
