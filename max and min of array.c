// max and min of an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20],min,max,i,leng;
	printf("enter your array length:");
	scanf("%d",&leng);
	printf("enter your array elememts:");
	for(i=0;i<leng;i++)
	scanf("%d",&arr[i]);
	min=max=arr[0]; 
	for(i=1;i<leng;i++)
	{
	if(max<arr[i])
	max=arr[i];
	if(min>arr[i])
	min=arr[i];
    }
	printf("the maximun of the array is %d\n",max);
	printf("the minium of the array is %d",min);
	getch();
}
