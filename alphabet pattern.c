//a to z in pattern
#include<stdio.h>
void main()
{
	char i,j;
	for(i=65;i<=90;i++)
	{
		for(j=65;j<=i;j++)
		printf("%c",j);
		printf("\n");
	}
}
