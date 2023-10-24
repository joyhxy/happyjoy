void print(int n)
{
	if(n>9)
	{
		printf(n/10);
	}
	printf("%d",n%10);
}
int main()
{
	unsigned int num=0;
	scanf("%d",&num);
	printf(num);
	//return 0;
	
}
