#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="Hello";
	char str2[20]="World";
	strcat(str1,str2);
	printf("concatenated string =%s",strcat);
	return 0;
}
