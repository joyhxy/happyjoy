#include <stdio.h>
#include <stdlib.h>
int main()
{
	double * ptd;
	int max;
	int number;
	int i=0;
	puts("what is the maximum number of type double entries?");
	if(scanf("%d",&max)!=1)
	{
		puts("memory allocation failed.goodbye.");
		exit(EXIT_FAILURE);
	}
	puts("enter the values(q to quit):");
	while(i<max&&scanf("%lf",&ptd[i])==1)
	++i;
	printf("here are your %d enteries:\n",number=i);
	for(i=0;i<number;i++)
	{
		printf("%7.2f",ptd[i]);
		if(i%7==6)
		putchar('\n');
	}
	if(i%7!=0)
	putchar('\n');
	puts("done.");
	free(ptd);
	return 0;
}



