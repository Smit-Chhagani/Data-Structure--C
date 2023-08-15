// 17. Write a program to insert a number at a given location in an array.

#include<stdio.h>

int main()
{
    int arr[100];
    int i, x, pos, n;
    printf("Enter value of n:");
    scanf("%d",&n);
    // initial array of size 10
    printf("enter values in array:");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    // element to be inserted
    printf("enter element you want to insert");
    scanf("%d",&x);
    // position at which element
    // is to be inserted
    printf("enter position you want to insert");
    scanf("%d",&pos);
    // increase the size by 1
    n++;
    // shift elements forward
    for (i = n - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    // insert x at pos
    arr[pos - 1] = x;
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}