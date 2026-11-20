//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>
enum value {A=10,B,C};
int main() {
    printf("A=%d\n",A);
    printf("B=%d\n",B);
    printf("C=%d",C);
    return 0;
}
