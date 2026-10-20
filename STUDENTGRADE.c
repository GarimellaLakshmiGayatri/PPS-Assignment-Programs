/*Student Grade*/
#include<stdio.h>
void main()
{
	int m;
	printf("Enter Student marks:");
	scanf("%d",&m);
	if(m<0||m>100)
	      printf("Invalid mark");
	else if(m>=90&&m<=100)
	      printf("O GRADE");
	else if(m>=80&&m<=89)
	      printf("A+ GRADE");
	else if(m>=70&&m<=79)
		  printf("A GRADE");
	else if(m>=60&&m<=69)
	      printf("B GRADE");
    else if(m>=50&&m<=59)
		  printf("C GRADE");
	else if(m<50&&m>0)
	      printf("FAIL");
			  
		  
}
