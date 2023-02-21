//palindrome
#include<stdio.h>
void main()
{
	int res=0,rem,num,temp;
	printf("Enter the number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem =num%10;
		res=(res*10)+rem;
		num=num/10;
	}
	if(temp==res)
	printf("\nThe given number is palindrome");
	else
	printf("the given number is not palindrome");
	
}
