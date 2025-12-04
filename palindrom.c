#include<stdio.h>
int main()
{
	int n,rev=0,d,temp;
	printf("Enter any number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	if(rev==temp)
	printf("It is a palindrom");
	else
	printf("It is not a palindrom");
	return 0;
}
