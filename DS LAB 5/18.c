// // 18. Write a program to delete a number from a given location in an array.

#include<stdio.h>

int main()
{
    int n, i, pos, num;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the number to be delete: ");
    scanf("%d", &pos);
    for(i=pos; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",arr[i]);
    }
}
