#include<stdio.h>
int main()
{
	int a[20],n,key,i,pos=0,mid=0,low=0,high;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter array element to search:");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<high)
	{
		if(key==a[mid])
		break;
		else if(key<a[mid])
		low=mid+1;
		mid=(low+high)/2;
	}
	if(key==a[mid])
	printf("Element found");
	else
	printf("Element not found");
	return 0;
}
