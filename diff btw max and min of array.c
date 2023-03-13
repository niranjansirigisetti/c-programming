// difference of minimum and maximum of an array
#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[20],i,max,min,size;
	printf("enter the array size:");
	scanf("%d",&size);
	printf("enter the array elements:");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	max=min=arr[0];
	for(i=1;i<size;i++)
	  if(arr[i]>max)
	  max=arr[i];
	for(i=1;i<size;i++)
	  if(arr[i]<min)
	  min=arr[i];
	printf("The difference between max and min is %d",max-min);  
	
}
