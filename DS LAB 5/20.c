// Write a program to delete a number from an array that is already sorted in an 
// ascending order. 

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, n, x;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter elements of array");
        scanf("%d",&arr[i]);
    }
    printf("enter number you want to delete");
    scanf("%d",&x);

    for( i = 0; i < n; i++){
        if (arr[i] == x)
        {
            for ( j = i; j < n-1; j++)
            {
                arr[j] = arr[j+1];
            }
            n--;
            break;   
        }
        
    }
    if (i == n)
    {
        printf("Number not found in the array.\n");
    }
    else
    {
        printf("Number found in the array.\n");
    }
    for ( i = 0; i < n; i++)
    {
        printf("Array is : %d\n",arr[i]);
    }    
    return 0;
}

