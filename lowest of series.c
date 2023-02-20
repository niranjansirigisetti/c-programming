//finding lowest of the  n series
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,low,ele;
	printf("enter the n value");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		scanf("%d",&ele);
		if(i==1)
		low=ele;
		if(low>ele)
		low=ele;
		i++;
	}
	printf("the lowest of the series is %d",low);
}
