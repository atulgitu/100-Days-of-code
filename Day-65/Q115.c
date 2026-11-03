//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram
Explanation 1:
The strings contain the same characters with the same frequencies.

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
Explanation 2:
The strings do not contain the same characters.

*/
#include <stdio.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};
    int i, isAnagram = 1;
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
