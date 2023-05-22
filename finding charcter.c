//finding the given chracter is in uppercase are lower case or special charcter
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&& ch<='Z')
	printf("uppercase");
	else if(ch>='a' && ch<='z')
	printf("lower case");
	else if(ch>='0' && ch<= '9')
	printf("Digit");
	else
	printf("special symbol");
}
