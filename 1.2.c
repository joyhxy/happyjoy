#include <stdio.h>
int main()
{
	int min,max;
	printf("Enter lower and upper integer limits:");
	scanf("%d %d",&min,&max);
	int sum;
	while(min<max)
	{
		int a=min*min;
		int b=max*max;
	    for(sum=0;min<=max;min++)
	    {
		    sum=sum+min*min;
	    }
	printf("The sums of the squares from %d to %d is %d\n",a,b,sum);
	printf("Enter next set of limits:");
	scanf("%d %d",&min,&max);
	}
	printf("Done");
    return 0;
}
