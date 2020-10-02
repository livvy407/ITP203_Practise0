#include<stdio.h>

int main()
{
	int ID = 500;
	int password = 000;

	printf("Enter the ID:\n");
	scanf("%d",&ID);

	switch(ID)
	{
		case 500:
		printf("Enter Your Password:\n");
		scanf("%d",&password);

		switch(password)
		{
			case 000:
			printf("Welcome again.");
			break;

			default:
			printf("Error, Sorry");
			break;
		}
		
		break;
		default:
		printf("Error, sorry");
		break;
	}
}