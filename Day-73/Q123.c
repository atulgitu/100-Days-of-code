//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 33
Words: 6
Lines: 2

*/
#include <stdio.h>
int main() {
    FILE *fp;
    int ch,prev=' ',chars=0,words=0,lines=0;
    fp=fopen("sample.txt","r");
    if(fp==NULL) {
        printf("File not found");
        return 0;
    }
    while((ch=fgetc(fp))!=EOF) {
        chars++;
        if(ch=='\n')
            lines++;
        if(ch!=' '&&ch!='\n'&&(prev==' '||prev=='\n'))
            words++;
        prev=ch;
    }
    if(chars>0&&prev!='\n')
        lines++;
    fclose(fp);
    printf("Characters: %d\n",chars);
    printf("Words: %d\n",words);
    printf("Lines: %d",lines);
    return 0;
}
