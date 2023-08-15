#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define n 100
int top = -1;
char stack[n];

void push(char x){
    if (top > n)
    {
        printf("Stack overflow");
        return ;
    }
    top++;
    stack[top] = x; 
}

char pop(){
    if (top < -1)    
    {
        printf("Stack underflow");
        return '0';
    }
    top--;
    return stack[top+1];
}

void display(){
	for(int i = 0;i<=top;i++){
		printf("%c ",stack[i]);
	}
	printf("\n");
}

char perform_operation(int operand1, int operand2,char temp){
    if (temp == '+')
    {
        return operand1 + operand2;
    }
    if (temp == '-')
    {
        return operand1 - operand2;
    }
    if (temp == '*')
    {
        return operand1 * operand2;
    }
    if (temp == '/')
    {
        return operand1 / operand2;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char input[50];
    printf("enter postfix expression:");
    scanf("%s",&input);

    int i=0, operand1, operand2, value=0;
    char temp;
    char next = input[i];
    while (next != '\0')
    {
        temp = next;
        if (isdigit(temp))
        {
            push(temp);
        }
        else{
            operand2 = pop();
            operand1 = pop();
            value = perform_operation(operand1,operand2,temp);
            push(value);
        }
        display();
        next = input[i++];
    }
    printf("%c",pop());
    return 0;
}
