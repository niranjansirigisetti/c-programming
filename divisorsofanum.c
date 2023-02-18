//second assignment
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,last,num,evensum=0,oddsum=0,c;
	printf("enter the last range:");
	scanf("%d",&last);
	printf("enter the number:");
	scanf("%d",&num);
    for(i=1;i<=last;i++)
    {
    	if(i%num==0)
    	{
   		c=i;
   		printf("%d\n",c);
    	if(c%2==0)
		evensum=evensum+i;
		else
		oddsum=oddsum+i;
		}
	}
	printf("evensum is : %d\n oddsum is : %d",evensum,oddsum);
}
