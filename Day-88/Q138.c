//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>
enum color {RED,YELLOW,GREEN};
int main() {
    char names[3][10]={"RED","YELLOW","GREEN"};
    enum color c;
    for(c=RED;c<=GREEN;c++) {
        printf("%s=%d\n",names[c],c);
    }
    return 0;
}
