//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include <stdio.h>
int main() {
    FILE *fp;
    int num,sum=0,count=0;
    float avg;
    fp=fopen("numbers.txt","r");
    if(fp==NULL) {
        printf("File not found");
        return 0;
    }
    while(fscanf(fp,"%d",&num)==1) {
        sum=sum+num;
        count++;
    }
    fclose(fp);
    if(count==0) {
        printf("File is empty");
        return 0;
    }
    avg=(float)sum/count;
    printf("Sum = %d\n",sum);
    printf("Average = %.2f",avg);
    return 0;
}
