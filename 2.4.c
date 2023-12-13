#include<stdio.h>
double copy(double arr1[][3],double arr2[][3]);
int main()
{
	double arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	double arr2[3][3]={0};
	copy(arr1,arr2);
	int i;
	for(i=0;i<3;i++)
	{
		int j;
		for(j=0;j<3;j++)
		{
			printf("%lf ",arr2[i][j]);
		}
		printf("\n");
	 } 
    return 0;  	
}
double copy(double arr1[][3],double arr2[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		arr2[i][j]=arr1[i][j];
	}
}

