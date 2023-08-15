// 21. Write a program to merge two unsorted arrays.

#include <stdio.h>
void main()
{
    int s1, s2, size, i;
    // first array
    printf("Enter Size of 1st Array: ");
    scanf("%d", &s1);
    int a[s1];
    printf("Enter Elements in 1st Array\n");
    for (i = 0; i < s1; i++)
    {
        scanf("%d", &a[i]);
    }
    // second array
    printf("Enter Size of 2nd Array: ");
    scanf("%d", &s2);
    int b[s2];
    printf("Enter Elements in 2st Array\n");
    for (i = 0; i < s2; i++)
    {
        scanf("%d", &b[i]);
    }
    size = s1 + s2;
    int c[size];
    int k = 0;
    for (i = 0; i < s1; i++)
    {
        c[k] = a[i];
        k++;
    }
    for (i = 0; i < s2; i++)
    {
        c[k] = b[i];
        k++;
    }
    printf("Array after merging\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", c[i]);
    }
}
