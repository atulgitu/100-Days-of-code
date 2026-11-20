//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
int main() {
    FILE *fp;
    int ch,vowels=0,consonants=0;
    fp=fopen("text.txt","r");
    if(fp==NULL) {
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF) {
        if(ch>='A'&&ch<='Z')
            ch=ch+32;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            vowels++;
        else if(ch>='a'&&ch<='z')
            consonants++;
    }
    fclose(fp);
    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d",consonants);
    return 0;
}
