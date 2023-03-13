//sum of individual digits of an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100],i,size,sum=0;
	printf("enter the array size:");
	scanf("%d",&size);
	printf("enter the array elements:");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("the sum is %d",sum);
	getch();
}
