//printing  tables
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1,num;
	printf("enter which table you want:");
	scanf("%d",&num);
	while(j<=10)
	    {
	    	printf("%d x %d = %d\n",num,j,i*num);
	    	i++;
	    	j++;
		}
}
