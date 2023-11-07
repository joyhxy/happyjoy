#include <stdio.h>
int main()
{
	int arr[10]={0};
	int *p=arr;
	char*pc=arr;
	printf("%p\n",p);
	printf("%p\n",p+1);
	printf("%p\n",pc);
	printf("%p\n",pc+1);
	 
	return 0;
}
