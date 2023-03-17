//area of rectangle using functions
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,b,area;
	printf("enter the length and breath:\n");
	scanf("%d %d",&l,&b);
	area=my_fun(l,b);
	printf("The area of the rectangle is %d",area);
}
int my_fun(int a,int b)
{
	return a*b;
}
