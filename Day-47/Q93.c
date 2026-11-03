//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int count[26] = {0};
    int i, isAnagram = 1;
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] = s1[i] + 32;
        if (s1[i] >= 'a' && s1[i] <= 'z')
            count[s1[i] - 'a']++;
    }
    for (i = 0; s2[i] != '\0'; i++) {
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] = s2[i] + 32;
        if (s2[i] >= 'a' && s2[i] <= 'z')
            count[s2[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram == 1)
        printf("Anagrams");
    else
        printf("Not anagrams");

    return 0;
}
