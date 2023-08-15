#include <stdio.h>
#include <string.h>

#define N 100
char stack[N];
int top = -1;

void push(char);
char pop();
int G(char);
int F(char);
void display();

int main()
{

	printf("Enter the infix expression : ");
	char input[50];
	scanf("%s", input);

	char output[50];
	int k = 0, i = 0;

	push('(');
	char next = input[i];

	while (next != '\0'){
		while (G(stack[top]) > F(next)){
			char temp = pop();
			output[k++] = temp;
		}

		if (G(stack[top]) != F(next)){
			push(next);
		}else{
			pop();
		}
		display();

		next = input[++i];
	}
	output[k] = '\0';

	printf("%s",output);
}

int G(char n)
{
	if (n == '+' || n == '-')
		return 2;
	if (n == '*' || n == '/')
		return 4;
	if (n == '^')
		return 5;
	if (n == '(')
		return 0;
	return 8;
}
int F(char n)
{
	if (n == '+' || n == '-')
		return 1;
	if (n == '*' || n == '/')
		return 3;
	if (n == '^')
		return 6;
	if (n == '(')
		return 9;
	if (n == ')')
		return 0;
	return 7;
}

void push(char n)
{
	if (top >= N)
	{
		printf("Stack is overflowed...");
		return;
	}
	stack[++top] = n;
}

char pop()
{
	if (top < 0)
	{
		printf("Stack is underflowed...");
		return -1;
	}
	return stack[top--];
}

void display(){
	for(int i = 0;i<=top;i++){
		printf("%c ",stack[i]);
	}
	printf("\n");
}