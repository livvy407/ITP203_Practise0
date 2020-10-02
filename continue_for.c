#include<stdio.h>

int main()
{
	int i;
	int number;
	int sum;

	for( i=0; i<=5; i++)
	{
		printf("Enter the number %d :",i );
		scanf("%d",&number);

		if( number<10 )
		{
			continue;
		}

		sum = sum + 1;
	}
	printf("The sum of the number is: %d",sum);
}