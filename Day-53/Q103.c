//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3
Explanation 1:
The pivot index is 3. Left sum = 1 + 7 + 3 = 11, Right sum = 5 + 6 = 11.

Input 2:
nums = [1,2,3]
Output 2:
-1
Explanation 2:
There is no index that satisfies the conditions in the problem statement.

Input 3:
nums = [2,1,-1]
Output 3:
0
Explanation 3:
The pivot index is 0. Left sum = 0 (no elements to the left), Right sum = 1 + (-1) = 0.

*/
#include <stdio.h>

int main() {
    int n, i, nums[100], total = 0, leftSum = 0, pivot = -1;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total = total + nums[i];
    }

    for (i = 0; i < n; i++) {
        // right sum = total - left sum - current element
        if (leftSum == total - leftSum - nums[i]) {
            pivot = i;
            break;
        }
        leftSum = leftSum + nums[i];
    }

    printf("%d", pivot);
    return 0;
}
