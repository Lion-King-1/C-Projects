//Input Radius of Circle and calculate its Area

// This is important because Visual Studio takes scanf a danger
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	const float PI = 3.14159f; // pi is constant float
	float r = 0, result = 0;

	printf("\n\n\n\t\t\t\t\tEnter Radius of Circle ?\n\n\n\n\t\t\t\t\t--> ");
	scanf("%f", &r);
	printf("You Entered --> %f", r);

	result = PI * r * r;
	printf("\nArea of Circle PI * r * r  --> %f", result);

	printf("\n\n\n\n\n");
}