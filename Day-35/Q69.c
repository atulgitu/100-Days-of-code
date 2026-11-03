//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main() {
    int n, i, arr[100], largest, second, found = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] != largest) {
            if (found == 0 || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    if (found == 1)
        printf("%d", second);
    else
        printf("No second largest element");

    return 0;
}
