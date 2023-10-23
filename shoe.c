#include <stdio.h>
#define adjust 7.31
#define scale 0.333
int main(void)
{
	double shoe,foot;
	printf("shoe size (men's)     foot length\n");
	shoe=3.0;
	while(shoe<180000.1)
	{
		foot=scale*shoe+adjust;
		printf("%10.1f %15.2f inches\n",shoe,foot);
		shoe++;
	}
	printf("if the shoes fit,wear it.\n");
	return 0;
}
