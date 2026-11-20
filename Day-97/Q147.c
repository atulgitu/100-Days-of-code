//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
struct Employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    FILE *fp;
    struct Employee e1,e2;
    printf("Enter name, ID and salary: ");
    scanf("%s%d%f",e1.name,&e1.id,&e1.salary);
    fp=fopen("employee.dat","wb");
    if(fp==NULL) {
        printf("Error in creating file");
        return 0;
    }
    fwrite(&e1,sizeof(e1),1,fp);
    fclose(fp);
    printf("Data stored in employee.dat\n");
    fp=fopen("employee.dat","rb");
    fread(&e2,sizeof(e2),1,fp);
    fclose(fp);
    printf("Data read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f",e2.name,e2.id,e2.salary);
    return 0;
}
