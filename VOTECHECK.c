/*Eligible to Vote or Not*/
#include<stdio.h>
void main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\nEligible to vote");
	}
	else
	{
		printf("\nNot Eligible to vote");
	}
}
