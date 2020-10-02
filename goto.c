#include<stdio.h>

int main()
{
	int num;
	int i=1;

	printf("Enter the number:\n");
	scanf("%d",&num);

	table:

	printf("%d * %d = %d\n", num, i, num*i);
	i++;

	if(i<=10)
		goto table;
}