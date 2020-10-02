#include<stdio.h>

int main()
{
	int i = 0;

	while(i <= 10)
	{
		printf("The value of the variable %d \n",i);
		i++;

		if(i == 5)
		{
			break;
		}
	}
	return 0;
}