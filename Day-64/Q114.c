//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3
Explanation 1:
The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

Input 2:
s = "bbbbb"
Output 2:
1
Explanation 2:
The answer is "b", with the length of 1.

Input 3:
s = "pwwkew"
Output 3:
3
Explanation 3:
The answer is "wke", with the length of 3. Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

*/
#include <stdio.h>

int main() {
    char s[200];
    int lastIndex[256];
    int i, start = 0, len, maxLen = 0;
    unsigned char ch;
    printf("Enter a string: ");
    scanf("%s", s);

    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    for (i = 0; s[i] != '\0'; i++) {
        ch = s[i];
        // if this character is already in the current window, move start after it
        if (lastIndex[ch] >= start)
            start = lastIndex[ch] + 1;
        lastIndex[ch] = i;

        len = i - start + 1;
        if (len > maxLen)
            maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}
