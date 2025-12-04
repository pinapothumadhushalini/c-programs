#include<stdio.h>
int main()
{
	int n,a[n],i,j,rep=0,count=0;
	printf("Enter array size:");
	scanf("%d",&n);
	printf("Enterr array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Duplicate elements are");
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j<i&&a[i]==a[j])
			{
				rep=1;
				break;
			}
			if (a[i]=a[j])
			{
				count++;
			}
		}
		if(!rep&&count>1)
		printf("%d",a[i]);
	}
	return 0;
}
