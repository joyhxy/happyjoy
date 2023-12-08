#include<stdio.h>
void print(char,int,int);
int main()
{
	char n;
	int row,column;
	printf("Please enter the characters to print and the number of rows and columns to print.\n ");
	scanf("%c %d %d",&n,&row,&column);
	print(n,row,column);
	return 0;
} 
void print(char n,int row,int column)
{
	int i;
	for(i=0;i<column;i++)
	{
		int j;
		for(j=0;j<row;j++)
		{
			printf("%c",n);
		}
		printf("\n");
	}
}
