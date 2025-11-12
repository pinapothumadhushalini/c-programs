#include<stdio.h>
int main()
{
	int PI=3.14,radius,area;
	printf("Enter radius value");
	scanf("%d",&radius);
	area=PI*radius*radius;
	printf("area of circle=%d",area);
	return 0;
}
