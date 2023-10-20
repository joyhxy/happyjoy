int main()
{
	int i=0;
	int j=0;
	for(j=1;j<10;j++)
	{
		for(i=1;i<=j;i++)
		{
		printf("%d*%d=%-2d ",j,i,j*i);
	    }
		printf("\n");
	}
	return 0;
}
