#include <stdio.h>
#define size 10
#define par 72
int main(void)
{
	int index,score[size];
	int sum=0;
	float average;
	printf("enter %d golf scores:\n",size);
	for(index=0;index<size;index++)
	{
		sancf("%d",&score[index]);
	}
	printf("the scores resd in are as follows:\n");
	for(index=0;index<size;index++)
	{
		printf("%5d",score[index]);
	}
	printf("\n");
	for(index=0;index<size;index++)
	{
		sum+=score[index];
	}
	average=(float)sum/size;
	printf("sum of the scores=%d,average=%.2f\n",sum,average);
	printf("that's a handicap of %.0f.\n",average-par);
	return 0;
}
