#include<stdio.h>
int main()
{
	int a[20],n,key,i,found=0,position;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter number to search:");
	scanf("%d",&key);
	for(i=1;i<n;i++)
	{
		if(key==a[i])
		{
			found==found+i;
			position=i;
		}
	}
	if(found==1)
	printf("Element found at index %d\n",position);
	else
	printf("Element not found\n");
	return 0;
}
