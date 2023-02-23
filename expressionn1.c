//1+1/2+1/3+1/4+......+1/n
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	float sum=1,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
	sum=sum+1/i;
	}
	printf("The sum is %.4f",sum);
}
