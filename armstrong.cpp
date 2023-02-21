//armstrong number
#include<stdio.h>
int main()
{
	int num,digit,temp,sum=0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit*digit*digit;
		num=num/10;
	}
	if(temp==sum)
	printf("The given number is armstrong");
	else
	printf("Not armstrong");
}
