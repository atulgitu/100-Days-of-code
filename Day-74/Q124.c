//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>
int main() {
    FILE *src,*dest;
    char sname[50],dname[50];
    int ch;
    printf("Enter source file name: ");
    scanf("%s",sname);
    printf("Enter destination file name: ");
    scanf("%s",dname);
    src=fopen(sname,"r");
    if(src==NULL) {
        printf("Source file not found");
        return 0;
    }
    dest=fopen(dname,"w");
    while((ch=fgetc(src))!=EOF) {
        fputc(ch,dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s",dname);
    return 0;
}
