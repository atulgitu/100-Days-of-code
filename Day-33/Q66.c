//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n,i,arr[101],x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d sorted elements: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d",&x);
    i=n-1;
    while(i>=0&&arr[i]>x) {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=x;
    n++;
    for(i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    return 0;
}
