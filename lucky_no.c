#include<stdio.h>
int main()
{
	int d,m,year,sum,lucky;
	printf("enter your dd/mm/year");
	scanf("%d%d%d",&d,&m,&year);
	sum=d+m+year;
	lucky=sum%9;
	printf("your lucky number is %d",lucky);
	return 0;
	
}
