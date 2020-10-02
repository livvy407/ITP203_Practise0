#include<stdio.h>

int main()
{
	int i;
	int j;
	int k;

	for(int i=1; i<=3; i++)
	{
		for(int j=1; j<=3; j++)
		{
			for(int k=1; k<=3; k++)
			{
				if(i==3 && j==3 && k==3)
				{
					goto out;
				}
			}
		}
	}
	out:
	printf("out of the loop\n");
	return 0;
}