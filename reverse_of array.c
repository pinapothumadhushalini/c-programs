#include<stdio.h>
int main()
{
	int n,a[n],i;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Reverse of given array is:");
	for(i=n;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
