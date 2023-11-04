 #include <stdio.h>
int main(void)
{
	int i=0,a=1,b=2,c=3,d=4;
	i=a++ || ++b || d++;
	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);

	return 0;
}

	
