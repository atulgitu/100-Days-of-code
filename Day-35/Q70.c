//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n,i,j,arr[100],k,last;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    k=k%n;
    for(i=1;i<=k;i++) {
        last=arr[n-1];
        for(j=n-1;j>0;j--) {
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
