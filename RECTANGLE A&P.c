/*Area and Perimeter of a Rectangle*/
#include<stdio.h>
void main()
{
	int l,b,area,perimeter;
	printf("Enter length and breadth:");
	scanf("%d%d",&l,&b);
	area=l*b;
	perimeter=2*(l+b);
	printf("\nArea of the rectangle:%d",area);
	printf("\nPerimeter of the rectangle:%d",perimeter);
	
}
