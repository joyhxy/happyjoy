#include<stdio.h>
double mean(double,double);
int main()
{
	double a,b;
	printf("Please enter two numbers(!=0).\n");
	scanf("%lf %lf",&a,&b);	
	while(a!=0&&b!=0)
	{
	printf("the harmonic average is %lf.\n",mean(a,b));
	printf("Please enter two numbers(!=0).\n");
	scanf("%lf %lf",&a,&b);	
    }
	printf("error number,done.\n");
	
	return 0;
}
double mean(double a,double b)
{
	double A=1.0/a;
	double B=1.0/b;
	double AB=(A+B)/2.0;
	double ab=1.0/AB;
	return ab;
}
