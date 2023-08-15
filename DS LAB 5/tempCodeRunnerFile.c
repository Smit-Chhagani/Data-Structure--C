#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//    int i, j, n, x, p, arr[100];

//    printf("Enter size of array:");
//    scanf("%d",&n);

//    for ( i = 0; i < n; i++)
//    {
//       printf("Enter element for index %d",i);
//       scanf("%d",&arr[i]);
//    }
//    printf("Enter number you want to insert");
//    scanf("%d",&x);

//    for ( i = 0; i < n; i++)
//    {
//       if (x < arr[i])     
//       {
//          printf("enter in if block");
//          p = i;
//          for ( j = n - 1; j >= i; j--)
//          {
//             printf("enter in j loop");
//             arr[j+1] = arr[j];
//          }
//          printf("out of j loop");
//          arr[p] = x;
//          n++;
//          break;
//       } 
//    }
//    printf("out of i loop");
//    for ( i = 0; i < n; i++)
//    {
//       printf("updated array is:%d\n",arr[i]);
//    }  
//    return 0;
// }