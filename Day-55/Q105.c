//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3
Explanation 1:
Size = 3, Count of 3 = 2 → 2 > 3/2. Thus, 3 is the majority element.

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2
Explanation 2:
Size = 7, Count of 2 = 4 → 4 > 7/2. Thus, 2 is the majority element.

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
Explanation 3:
Size = 8, Count of 2 = 4 → 4 is not strictly greater than 8/2. Hence, no majority element exists.

*/
#include <stdio.h>

int main() {
    int n, i, nums[100], candidate = 0, count = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Moore's voting algorithm to find a candidate
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    // check if the candidate really appears more than n/2 times
    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}
