#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void bin_search(int array[],int key)
{
   int mid,first=0,last=SIZE-1,flag=0;
   while(first<=last)
   {
	mid=(first+last)/2;
	if(array[mid]==key)
	{
		printf("\nElement %d found at position %d\n",key,mid+1);
		flag=1;
		break;
	}
	else if(key<=array[mid])
		last=mid-1;
	else
	first=mid+1;
   }
   if(flag!=1)
	printf("\nElement %d could not be found in the array\n",key);
}
void main()
{
   int array[SIZE],key,i;
   printf("\nEnter the elements in a sorted manner : \n");
   for(i=0;i<SIZE;i++)
	scanf("%d",&array[i]);
	printf("\nEnter the element to search :\n");
	scanf("%d",&key);
	bin_search(array,key);
}
