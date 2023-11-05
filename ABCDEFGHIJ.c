#include <stdio.h>
#define Rows 6
#define Chars 10
int main()
{
	int row;
	char ch;
	for(row=0;row<Rows;row++)
	{
	    for(ch='A';ch<('A'+Chars);ch++)
		{
			printf("%c",ch);
		 } 
		 printf("\n");
	}
	
	return 0;
}
