//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
#include <string.h>
enum gender {MALE,FEMALE,OTHER};
struct person {
    char name[50];
    enum gender g;
};
int main() {
    struct person p;
    char str[20];
    printf("Enter gender (MALE/FEMALE/OTHER): ");
    scanf("%s",str);
    if(strcmp(str,"MALE")==0)
        p.g=MALE;
    else if(strcmp(str,"FEMALE")==0)
        p.g=FEMALE;
    else
        p.g=OTHER;
    switch(p.g) {
        case MALE:
            printf("Male");
            break;
        case FEMALE:
            printf("Female");
            break;
        case OTHER:
            printf("Other");
            break;
    }
    return 0;
}
