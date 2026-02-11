#include <stdio.h>
int main()
{
	int n,i,search,found = 0;
	//input numbser of elements in the array
	printf("enter number of elements in the array");
	scanf("%d",&n);
	
	int arr[n];
	//input array elements 
	printf("enter elements of the array:\n");
	for(i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//input the elements to search
	printf("enter elements search:");
	scanf("%d",&search);
	
	
	//linear search
	for(i = 0;i < n;i++)
	{
		if(arr[i]==search)
		{
			found = 1;
			printf("elements %d found at index %d.\n",search,i);
			break; 
		}
	}
	//if elements is not found
	if(!found)
	{
		printf("elements %d not found in the array.\n",search);
	}
	return 0;
	
}
