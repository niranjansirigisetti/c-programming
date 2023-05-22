//finding the given chracter is in uppercase are lower case or special charcter
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	printf("The charcter is in uppercase");
	else if(ch>='a'&&ch<='Z')
	printf("The charcter is in lower case");
	else
	printf("The charcter is an special symbal");
}
