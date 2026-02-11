#include<stdio.h>
int main()
{
	int i,j, n,temp,minIndex;
	
	printf("enter number of the element :");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("enter %d elements :\n",n);
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	  
	  for(i=0;i<n-1;i++)
	  {
	  	minIndex = 1;
	  	
	  	for(j=i+1;j<n;j++)
	  	{
	  		if(arr[j]<arr[minIndex])
	  		minIndex = j;
		  }
		  temp = arr[i];
		  arr[i]=arr[minIndex];
		  arr[minIndex] = temp;
	  }
	  printf("sorted aarray ;\n");
	  for(i=0;i<n;i++)
	    printf("%d ",arr[i]);
	    return 0;
}
