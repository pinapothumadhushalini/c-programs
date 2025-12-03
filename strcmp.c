#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Hello";
	char str2[20]="Hello";
	return = strcmp(str1,str2);
	if(return==0)
	{
		printf("strings are equal\n")
	}
	else
	{
    	printf("strings are not equal");
	}
	return 0;
}
