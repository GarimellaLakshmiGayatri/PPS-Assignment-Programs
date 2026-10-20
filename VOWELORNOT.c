/*Vowel or Not*/
#include<stdio.h>
void main()
{
	char x;
	printf("Enter Character:");
	scanf("%c",&x);
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		printf("\nGiven Character is a VOWEL");
	}
	else
	{
		printf("\nGiven character is NOT A VOWEL");
	}
}
