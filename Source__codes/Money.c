//Write a C program that prompts the user to enter the amount of cash in their pockets, accepts the user's input, and displays the amount in the format shown below.

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	float num=0;

	printf("\n\n\n\t\t\t\t\tHow much money do you have in your pockets?\n\n\n\n\t\t\t\t\t--> ");
	scanf("%f", &num);
	printf("\nThe amount of money in your pockets is $%f", num);

	printf("\n\n\n\n\n");
}