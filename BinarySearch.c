/*Note: Input should be in the sorted order*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[100],key,num,i,j,low,mid,high,temp;
   printf("Enter the number of elements\n");
   scanf("%d",&num);
   printf("Enter %d elements\n", num);
   for(i=0;i<num;i++)
   {
   scanf("%d", &a[i]);
   }
   printf("\nEnter the key element\n");
   scanf("%d", &key);
   low = 0;
   high = num -1;
   while(low <= high)
	{
	mid = (low + high)/2;
	if(key== a[mid])
	{
	printf("Element %d found at %d position\n",key, mid+1);
	break;
	}
	else if(key < a[mid])
	high = mid-1;
	else
	low = mid +1;
	}
	if(low > high)
	printf("Element not found\n");
}
