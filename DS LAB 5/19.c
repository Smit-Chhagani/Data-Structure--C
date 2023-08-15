// 19. Write a program to insert a number in an array that is already sorted in an 
// ascending order.

#include <stdio.h>

int main() {
    int size;
    printf("enter size of array");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i < size; ++i)
    {
       scanf("%d",&arr[i]);
    }

    int num;
    printf("Enter a number to insert: ");
    scanf("%d", &num);

    int i, j;

    for (i = 0; i < size; i++) {
        if (arr[i] > num) {
            break;
        }
    }
    
    size++;
    for (j = size - 1; j >= i; j--) {
        arr[j + 1] = arr[j];
    }

    arr[i] = num;

    printf("Array after inserting %d:\n", num);
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
