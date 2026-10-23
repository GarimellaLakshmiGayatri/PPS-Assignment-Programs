/*Final payable amount*/
#include<stdio.h>
void main()
{
 int amount,premium,discount,deliverycost;
 printf("Enter order amount:");
 scanf("%d",&amount);
 if(amount>=500)
 {
    deliverycost=0;
    printf("Enter premium:");
    scanf("%d",&premium);
    if(premium)
    {
      discount=(amount*10)/100;
      amount=amount-discount+deliverycost;
      printf("Payable amount:%d",amount);
    }
    else
    {
      discount=0;
      amount=amount-discount+deliverycost;
      printf("Payable amount:%d",amount);
    }
 }
 else
 {
	deliverycost=50;
	discount=0;
	amount=amount-discount+deliverycost;
	printf("Payable amount:%d",amount);
 }

 }


