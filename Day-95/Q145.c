//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
};
struct student findTop(struct student s[],int n) {
    int i,top=0;
    for(i=1;i<n;i++) {
        if(s[i].marks>s[top].marks)
            top=i;
    }
    return s[top];
}
int main() {
    struct student s[50],top;
    int n,i;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter name, roll and marks of student %d: ",i+1);
        scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
    }
    top=findTop(s,n);
    printf("Top Student: %s | Roll: %d | Marks: %d",top.name,top.roll,top.marks);
    return 0;
}
