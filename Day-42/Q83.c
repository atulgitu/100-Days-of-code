//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
int main() {
    char str[100],ch;
    int i,vowels=0,consonants=0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i]!='\0';i++) {
        ch=str[i];
        if(ch>='A'&&ch<='Z')
            ch=ch+32;
        if(ch>='a'&&ch<='z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels=%d, Consonants=%d",vowels,consonants);
    return 0;
}
