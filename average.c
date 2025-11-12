#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("Enter c value:");
	scanf("%d",&c);
	d=a+b+c/3;
	printf("average=%d",d);
	return 0;
}
