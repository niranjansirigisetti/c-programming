//factorial of a number using function
#include<stdio.h>
void main()
{
	int num;
	long int res;
	printf("enter the number:");
	scanf("%d",&num);
	res=my_function(num);
	printf("The factorial of the number is %ld",res);
}
int  my_function(int num)
{
	long int fact=1,i;
	for(i=1;i<=num;i++)
	fact=fact*i;
	return fact;
}
