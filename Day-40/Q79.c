//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>
int main() {
    int r,c,i,j,d,a[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    printf("Enter the elements:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for(d=0;d<=r+c-2;d++) {
        if(d%2==0) {
            i=d;
            if(i>r-1)
                i=r-1;
            j=d-i;
            while(i>=0&&j<c) {
                printf("%d ",a[i][j]);
                i--;
                j++;
            }
        }
        else {
            j=d;
            if(j>c-1)
                j=c-1;
            i=d-j;
            while(j>=0&&i<r) {
                printf("%d ",a[i][j]);
                i++;
                j--;
            }
        }
    }
    return 0;
}
