//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>
#include <string.h>
enum light {RED,YELLOW,GREEN};
int main() {
    char str[20];
    enum light l;
    printf("Enter light (RED/YELLOW/GREEN): ");
    scanf("%s",str);
    if(strcmp(str,"RED")==0)
        l=RED;
    else if(strcmp(str,"YELLOW")==0)
        l=YELLOW;
    else if(strcmp(str,"GREEN")==0)
        l=GREEN;
    else {
        printf("Invalid light");
        return 0;
    }
    switch(l) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }
    return 0;
}
