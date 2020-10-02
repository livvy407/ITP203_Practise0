#include<stdio.h>

int main()
{
	int num = 4;
	switch(num)
	{
		case 1:
		printf("The module is MAT203");
		break;

		case 2:
		printf("The module is ITS203");
		break;

		case 3:
		printf("The module is ITP203");
		break;

		case 4:
		printf("The module id ITS202");
		break;

		default:
		printf("Out of bound");
		break;
	}
	return 0;
}