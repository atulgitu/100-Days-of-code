//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
int main() {
    FILE *in,*out;
    int ch;
    in=fopen("input.txt","r");
    if(in==NULL) {
        printf("input.txt not found");
        return 0;
    }
    out=fopen("output.txt","w");
    while((ch=fgetc(in))!=EOF) {
        if(ch>='a'&&ch<='z')
            ch=ch-32;
        fputc(ch,out);
        printf("%c",ch);
    }
    fclose(in);
    fclose(out);
    printf("Text written to output.txt");
    return 0;
}
