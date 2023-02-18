//factorial of a number
#include<stdio.h>
#include<conio.h>
void main()
{
   int fact=1,num,i;
   printf("enter the number");
   scanf("%d",&num);
   for(i=1;i<=num;i++)
   fact=fact*i;
   printf("The factorial of the number is %d",fact);

}
