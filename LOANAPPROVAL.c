/*LOAN APPROVAL*/
#include<stdio.h>
void main()
{
	int age,credit;
	float income;
	printf("Enter age:");
	scanf("%d",&age);
	if(age>=21&&age<=60)
	{
		printf("Enter monthly income:");
		scanf("%f",&income);
		if(income>=25000)
		{
			printf("Enter Credit score:");
			scanf("%d",&credit);
			if(credit>=700)
			{
				printf("Loan Approved");
			}
			else
			{
				printf("Loan rejected: credit score below 700");
			}
		}
		else
		{
			printf("Loan rejected: income below 25,000");
		}
	}
	else
	{
		printf("Loan rejected: age not in 21 to 60");
	}
}
