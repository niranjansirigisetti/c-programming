//prime or not
#include<stdio.h>
void main()
{
	int num,i,fact=0;
	printf("enter the number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	if(num%i==0)
	fact++;
	if(fact==2)
	printf("the %d is an prime number",num);
	else
	printf("The entered number is not prime");
	
}
