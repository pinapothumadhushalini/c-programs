#include<stdio.h>
int main()
{
	int n,i,first=0,second=1,next;
	printf("Enter number of terms:");
	scanf("%d",&n);
	printf("fibonacci series:\n");
	for(i=0;i<=n;i++)
	{
	if(i==0)
	{
		printf("%d",first);
		continue;
    }
	if(i==1)
	{
		printf("%d",second);
		continue;
	}
	next=first+second;
	printf("%d",next);
	first=second;
	second=next;
    }
	return 0;
}
