//printing odd numbers 
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,i,count=0;
	printf("enter starting number");
	scanf("%d",&n1);
	printf("enter ending number");
	scanf("%d",&n2);
	for(i=n1;i<=n2;i++)
	if(i%2==1)
	{
	count++;
		if(count==3)
		{
	        i=i+1;	
		count=0;
		}
		else
		printf("%d\n",i);
    }
		
}
