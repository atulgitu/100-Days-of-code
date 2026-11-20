//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>
enum menu {ADD,SUBTRACT,MULTIPLY};
int main() {
    char str[20];
    int a,b;
    enum menu choice;
    printf("Enter operation and two numbers: ");
    scanf("%s%d%d",str,&a,&b);
    if(strcmp(str,"ADD")==0)
        choice=ADD;
    else if(strcmp(str,"SUBTRACT")==0)
        choice=SUBTRACT;
    else if(strcmp(str,"MULTIPLY")==0)
        choice=MULTIPLY;
    else {
        printf("Invalid choice");
        return 0;
    }
    switch(choice) {
        case ADD:
            printf("%d",a+b);
            break;
        case SUBTRACT:
            printf("%d",a-b);
            break;
        case MULTIPLY:
            printf("%d",a*b);
            break;
    }
    return 0;
}
