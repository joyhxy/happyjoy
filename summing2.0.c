#include <stdio.h>
int main(void)
{
	long num;
	long sum=0l;
	printf("please enter an integer to be summed");
	printf("(q to quit):");
	
	while (scanf("%ld",&num)==1)
	{
		sum=sum+num;
		printf("please enter next integer");
	} 
	printf("those integers sum to %ld.\n",sum);
	return 0;
	
}
