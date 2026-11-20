//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>
struct student {
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct student s[50];
    int n,i,top=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter name, roll and marks of student %d: ",i+1);
        scanf("%s%d%d",s[i].name,&s[i].roll,&s[i].marks);
    }
    for(i=1;i<n;i++) {
        if(s[i].marks>s[top].marks)
            top=i;
    }
    printf("Topper: %s (Marks: %d)",s[top].name,s[top].marks);
    return 0;
}
