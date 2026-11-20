//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>
enum month {JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
int main() {
    char names[12][4]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};
    char str[10];
    int i,found=-1;
    enum month m;
    printf("Enter month (JAN to DEC): ");
    scanf("%s",str);
    for(i=0;i<12;i++) {
        if(strcmp(str,names[i])==0)
            found=i;
    }
    if(found==-1) {
        printf("Invalid month");
        return 0;
    }
    m=found;
    switch(m) {
        case FEB:
            printf("28 or 29 days");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days");
            break;
        default:
            printf("31 days");
    }
    return 0;
}
