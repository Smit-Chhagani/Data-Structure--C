// Take a stack of size 3 and performing following operations. Show the position of 
// stack at each step:
// i. Push 1
// ii. Push 2
// iii. Push 3
// iv. Push 4
// v. Pop 
// vi. Pop 
// vii. Push 5
// viii. Change 3
// rd element to 8
// ix. Push 6 & 7
// x. Traverse the stack

#include<stdio.h>

int size = 3, top = -1, i, s[3];

//PUSH FUNCTION
void push(int x){
    if (top >= size - 1)
    {
        printf("\nStack overflow\n");
        return;
    }
    top++;
    s[top] = x;
}

//POP FUNCTION
void pop(){
    if (top<0)
    {
        printf("\nStack is under flow \n");
        return;
    }
    else{
        printf("\nyour pop value is %d\n",s[top]);
        top--;
    }  
}

//DISPLAY FUNCTION
void display(){
    if (top < 0)
    {
        printf("\nStack is empty\n");
    }
    
    for (int i = top; i >= 0; i--)
    {
        printf("%d\t",s[i]);
    }
    printf("\n");
    
}

//CHANGE FUNCTION
void change(int i, int x){
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

void main(){
    //1. push(1)
    push(1);
    display();
    //2. push(2)
    push(2);
    display();
    //3. push(3)
    push(3);
    display();
    //4. push(4)
    push(4);
    display();
    //5. pop
    pop();
    display();
    //6. pop
    pop();
    display();
    //7. push(5)
    push(5);
    display();
    //8. change 3rd element to 8
    change(3,8);
    display();
    //9. push(6) & push(7)
    push(6);
    display();
    push(7);
    display();
    //10. Traverse the stack
    display();
}