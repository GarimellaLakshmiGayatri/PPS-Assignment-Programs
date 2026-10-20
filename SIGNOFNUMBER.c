/*Finding Sign of the given number*/
#include<stdio.h>
void main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	if(n>0)
	{
	    printf("\nGiven number %d is POSITIVE NUMBER",n);
    } 
    else
    {
    	if(n==0)
		{
			printf("\nGiven number %d is ZERO",n);
		}
		else
		{
			printf("\nGiven number %d is a NEGATIVE NUMBER",n);
		}
	}
	  
}
