//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include <stdio.h>
int main() {
    FILE *fp;
    char fname[50];
    int ch;
    printf("Enter file name: ");
    scanf("%s",fname);
    fp=fopen(fname,"r");
    if(fp==NULL) {
        printf("Error: File does not exist!");
        return 0;
    }
    printf("File opened successfully.\n");
    while((ch=fgetc(fp))!=EOF) {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
