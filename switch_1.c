#include<stdio.h>

int main()
{
	char operator;
	int n1,n2;

	printf("Enter the operator(+,-,/,*):");
	scanf("%c", &operator);
	printf("Enter two numbers:\n");
	scanf("%d %d", &n1, &n2);

	switch(operator)
	{
		case '+':
		printf("%d + %d = %d", n1, n2, n1+n2);
		break;

		case '-':
		printf("%d - %d = %d", n1, n2, n1-n2);
		break;

		case '/':
		printf("%d / %d = %d", n1, n2, n1/n2);
		break;

		case '*':
		printf("%d * %d = %d", n1, n2, n1*n2);
		break;

		default:
		printf("Error");
	}
	return 0;
}