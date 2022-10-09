//This code will help in re-run the same program

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int num = 0;
	do
	{
		if (num!=0)
		{
			printf("\nRe - Run....\n");
		}
		printf("\n\n\t\t\tPress 1 if you want to re-run the Program\n\n\t\t\t\t --> ");
		scanf("%d", &num);
	} while (num != 0);

	printf("\n\n\n\n\n");
}