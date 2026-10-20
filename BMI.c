/*BMI Calculation*/
#include<stdio.h>
void main()
{
	float height,weight,bmi;
	printf("Enter weight in kg:");
	scanf("%f",&weight);
	printf("Enter height in m:");
	scanf("%f",&height);
	bmi=weight/(height*height);
	if(bmi<18.5)
	      printf("\nBMI is %.2f and UNDERWEIGHT",bmi);
	if(bmi>=18.5&&bmi<25)
	      printf("\nBMI is %.2f and NORMAL",bmi);
    if(bmi>+25&&bmi	<30)
          printf("\nBMI is %.2f and OVERWEIGHT",bmi);
    if(bmi>=30)
        printf("\nBMI is %.2f and OBESE",bmi);	
}
