#include <stdio.h>
int main(void)
{
	const int FIRST_OZ=46;
	const int NEXT_OZ=20;
	int ounes,cost;
	printf("ounces    cost\n");
	for(ounes=1,cost=FIRST_OZ;ounes<=16;ounes++,cost+=NEXT_OZ)
	printf("%5d    $%4.2f\n",ounes,cost/100.0);
	return 0;
}

