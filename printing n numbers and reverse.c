//printing n numbers and their reverse
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1,j=n;i<=n||j>=n;i++,j--)
	printf("%d %d\n",i,j);
}
