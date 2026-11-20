//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include <stdio.h>
enum day {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main() {
    char names[7][10]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    enum day d;
    for(d=SUNDAY;d<=SATURDAY;d++) {
        printf("%s = %d\n",names[d],d);
    }
    return 0;
}
