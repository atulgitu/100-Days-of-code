//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Asha 101 80
New marks: 95
Output 1:
Before: Name: Asha | Roll: 101 | Marks: 80
After: Name: Asha | Roll: 101 | Marks: 95

*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct student s;
    struct student *p;
    p=&s;
    printf("Enter name, roll and marks: ");
    scanf("%s%d%d",p->name,&p->roll,&p->marks);
    printf("Before: Name: %s | Roll: %d | Marks: %d\n",p->name,p->roll,p->marks);
    printf("Enter new marks: ");
    scanf("%d",&p->marks);
    printf("After: Name: %s | Roll: %d | Marks: %d",p->name,p->roll,p->marks);
    return 0;
}
