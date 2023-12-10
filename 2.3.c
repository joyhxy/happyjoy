#include<stdio.h>
double min_max(double arr[],int sz);
int main()
{
	double arr[]={-3,-8,-100};  
	int sz=sizeof(arr)/sizeof(arr[0]);
	printf("%lf",min_max(arr,sz));
	return 0;
}
double min_max(double arr[],int sz)
{
	double value;
	if(sz==1)
	value=0;
	else
	{
		double min=arr[0],max=arr[1];
		int i;
	    for(i=0;i<sz;i++)
	    {
		    if(arr[i]<min)
			    min=arr[i];
		    if(arr[i]>max)
			    max=arr[i];
	    }
	    value=max-min;
	}
	return value;
}
