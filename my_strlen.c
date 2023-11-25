#include <stdio.h>
#include <string.h>
int my_strlen(const char*str)
{
	//assert(str);
	int count=0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	const char*p="abd";
 	printf("%d",my_strlen(p));
	return 0;
}

