#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j;
	printf("enter elements into matrix A\n");
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements into matrix B\n");
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
		scanf(" %d",&b[i][j]);
		}
	}
	printf("addition of matrices is:\n");
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=1;i<3;i++)
	{
		for(j=1;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
