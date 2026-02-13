#include<stdio.h>
int main()

{
	int n,key,i,j;
	
	printf("enter number of the elements:");
	scanf("%d",&n);
	
	int arr[n];
	printf("enter %d elements:\n");
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	 
	 
	 //insertion sort logic
	 for (i=0;i<n;i++)
	{
		key=arr[i];
		j=i-1;
		
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		printf("sorted array:\n");
		for(i=0;i<n;i++)
		printf("%d ",arr[i]);
    }
		return 0;
	
	
}
