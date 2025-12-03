#include<stdio.h>
int main ()
{
	int r,i,j,sum=0;
	printf("enter number of rows and columns of symmetric matrix");
	scanf("%d",&r);
	int a[r][r];
	printf("enter elements os matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		sum=sum+a[i][i];
	}
	printf("trace of matrix:%d",sum);
	return 0;
}
