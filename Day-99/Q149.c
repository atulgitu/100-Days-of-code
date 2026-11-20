//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>
struct student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct student *p;
    p=(struct student *)malloc(sizeof(struct student));
    if(p==NULL) {
        printf("Memory not allocated");
        return 0;
    }
    printf("Enter name, roll and marks: ");
    scanf("%s%d%d",p->name,&p->roll,&p->marks);
    printf("Name: %s | Roll: %d | Marks: %d",p->name,p->roll,p->marks);
    free(p);
    return 0;
}
