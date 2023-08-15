// 16. Write a program to find whether the array contains a duplicate number or not.

#include<stdio.h>

int main()
{
    int n, i, j, flag=0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("The array contains a duplicate number.");
    }
    else
    {
        printf("The array does not contain a duplicate number.");
    }
    return 0;
}