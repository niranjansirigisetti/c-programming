//table
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,last,i;
	printf("enter the number and last range:");
	scanf("%d %d",&num,&last);
	  for(i=1;i<=last;i++)
	  printf("%d x %d = %d\n",num,i,i*num);	
}
