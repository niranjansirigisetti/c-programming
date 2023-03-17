//cubes using sub function
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,res;
	printf("enter the number:");
	scanf("%d",&num);
	res=cube(num);
	printf("The cube of the number is %d",res);
}
int cube(int n)
{
	return n*n*n;
}
