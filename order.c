#include<stdio.h>
int data[2]={100,200};
int more[2]={300,400};
int main()
{
	int *p1,*p2,*p3;
	p1=p2=data;
	p3=more;
	printf("*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
	printf("*p1++=%d,*++p2=%d,(*p3)++=%d\n",*p1++,*++p2,(*p3)++);
	printf("*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
}
