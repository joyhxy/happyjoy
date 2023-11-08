#include <stdio.h>
int mystrlen(char*str)
{
	char*start=str;
	while(*str!='\0')
	{
		str++;
	}
	return str-start;
}
int main()
{
	int len=mystrlen("abc");
	printf("%d\n",len);
	return 0;
}
