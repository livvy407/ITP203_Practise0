#include<stdio.h>

int main()
{
	int a;
	int sum;

	for( a=0; a<10; a++)
	{
		if(a % 2 == 0)
		
		continue;

		sum = sum + a;
	}
	printf("The sum of the numbers is %d:",sum);
}