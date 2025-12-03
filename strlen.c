#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]="program";
	char b[20]={'p','r','o','g','r','a','m','\0'};
	printf("length of string a= %d\n",strlen(a));
	printf("length of string b= %d\n",strlen(b));
	return 0;
}
