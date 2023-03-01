//prime range count
#include<stdio.h>
void main()
{
	int i,j,s,e,count=0,fact=0;
	printf("enter the starting number:");
	scanf("%d",&s);
	printf("enter the ending num:");
	scanf("%d",&e);
	for(i=s;i<=e;i++)
	{
	  fact=0;
	 for(j=1;j<=i;j++)
	 if(i%j==0)
	 fact++;
	 if(fact==2)
	   {
	    count++;
	   }	
	}
	printf("the prime count in given range is %d",count);
}
