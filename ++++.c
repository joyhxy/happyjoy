#include <stdio.h>
int main(void)
{
	int a=10;
	int b=++a;
	printf("b=%d\n",b);
	printf("a=%d\n",a);
	b=a++;
	printf("b=%d\n",b);
	printf("a=%d\n",a);
	return 0;
	
}
