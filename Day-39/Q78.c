//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main() {
    int r,c,i,j,a[10][10],sum=0;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    if(r!=c) {
        printf("Matrix is not square");
        return 0;
    }
    for(i=0;i<r;i++) {
        sum=sum+a[i][i];
    }
    printf("%d",sum);
    return 0;
}
