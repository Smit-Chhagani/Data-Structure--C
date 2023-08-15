// 14. Write a program to calculate average of first n numbers.

#include<stdio.h>

int main()
{
    int n, i, sum=0;
    float avg;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum += i;
    }
    avg = (float)sum/n;
    printf("The average of first %d numbers is %.2f", n, avg);
    return 0;
}