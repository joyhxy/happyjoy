#include <stdio.h>
void interchange(int *a,int *b);
int main()
{
	int x=5,y=10;
	printf("Originally x = %d and y = %d.\n",x,y);
	interchange(&x,&y);
	printf("Now x = %d and y =%d",x,y);
	return 0;
}
void interchange(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


