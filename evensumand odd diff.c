//difference b/w evensum and oddsum
#include<stdio.h>
void main()
{
	int i,n,evensum=0,oddsum=0,diff;
	printf("enter the n value:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(i%2==0)
		evensum+=i;
		else
		oddsum+=i;
		i++;
	}
	diff=oddsum-evensum;
	printf("the even sum is %d\n the odd sum is %d",evensum,oddsum);
	printf("\n the differencr between them is %d ",diff);
}
