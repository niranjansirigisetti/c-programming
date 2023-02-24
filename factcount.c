//factor count of a number
#include<stdio.h>
void main()
{
	int num,i,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	if(num%i==0)
	count++;
	}
	printf("\nTotal factors = %d",count);
	
}
