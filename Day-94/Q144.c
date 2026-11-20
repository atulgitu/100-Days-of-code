//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
};
void printStudent(struct student s) {
    printf("Name: %s | Roll: %d | Marks: %d",s.name,s.roll,s.marks);
}
int main() {
    struct student s;
    printf("Enter name, roll and marks: ");
    scanf("%s%d%d",s.name,&s.roll,&s.marks);
    printStudent(s);
    return 0;
}
