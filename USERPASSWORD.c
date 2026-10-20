/*USER ID PASSWORD*/
#include<stdio.h>
void main()
{
	int userid,password;
	printf("Enter User Id:");
	scanf("%d",&userid);
	if(userid==101)
	{
		printf("Enter password:");
		scanf("%d",&password);
		if(password==4321)
		{
		      printf("LOGIN successful");
        }
		else
		{
			   printf("\nIncorrect password");
		}
    }
	else
		{      
	          printf("\nUSER NOT FOUND");
        }

}       

