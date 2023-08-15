// 25. Write algorithms to perform following operations on a stack:
// i. Push
// ii. Pop
// iii. Peep
// iv. Change

#include<stdio.h>
int n, s[100], top = -1, x, choice, i;

//PUSH FUNCTION
void push(){
    if (top >= n - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    printf("Enter element you want to enter:");
    scanf("%d",&x);
    s[top] = x;
}

//POP FUNCTION
void pop(){
    if (top<0)
    {
        printf("Stack is underflow \n");
        return;
    }
    else{
        printf("your pop value is %d\n",s[top]);
        top--;
    }  
}

//PEEP FUNCTION
void peep(){
    printf("Enter the position that you want to get element from");
    scanf("%d",&i);
    if (i == 0 || i > top)
    {
        printf("Invalid position");
    }
    else if (top - i + 1 < 0)
    {
        printf("stack underflow");
        return;
    }
    else{
        printf("the element on the position you entered is : %d",s[top - i + 1]);
    }
}

//DISPLAY FUNCTION
void display(){
    if (top < 0)
    {
        printf("\nStack is empty\n");
    }
    printf("Stack is\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n",s[i]);
    }
}

//CHANGE FUNCTION
void change(){
    printf("Enter element you want to enter:");
    scanf("%d",&x);
    printf("Enter the position that you want to change element at:");
    scanf("%d",&i);
    if (i == 0 || i > top)
    {
        printf("Invalid position");
    }
    
    else if (top - i + 1 < 0)
    {
        printf("stack underflow");
        return;
    }
    else{
        s[top-i+1] = x;
        printf("Elemment changed successfully");
    }
}

//MAIN FUNCTION
void main(){
    //TAKING SIZE OF STACK FROM USER
    printf("enter n:");
    scanf("%d",&n);
    do
    {
        printf("\nEnter the choice you want to perform\n1.push\n2.pop\n3.peep\n4.change\n5.display\n6.exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            change();
            break;
        case 5:
            display();
            break;
        case 6:
            return ;
        default:
            printf("Invalid choice");
        }
    } while (1);
}