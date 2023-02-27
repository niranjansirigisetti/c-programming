//sum of individual numbers
#include<stdio.h>
void main()
{
	int num,digit,i,sum;
	scanf("%d",&num);
	for(i=1;i<=3;i++)
	{
		sum=0;
	 while(num!=0)
	   {
		digit=num%10;
		sum=sum+digit;
		num=num/10;
       }
	num=sum;
	}
	printf("%d",sum);
}
