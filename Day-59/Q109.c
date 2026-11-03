//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int main() {
    int n,i,arr[100],k,windowSum=0,maxSum;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    if(k<=0||k>n) {
        printf("Invalid k");
        return 0;
    }
    for(i=0;i<k;i++) {
        windowSum=windowSum+arr[i];
    }
    maxSum=windowSum;
    for(i=k;i<n;i++) {
        windowSum=windowSum+arr[i]-arr[i-k];
        if(windowSum>maxSum)
            maxSum=windowSum;
    }
    printf("%d",maxSum);
    return 0;
}
