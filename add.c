void add(int*p) 
{
	(*p)++;
}

int main()
{
	int num=0;
	add(&num);
	printf("num=%d\n",num);
	add(&num);
	printf("num=%d\n",num);
	add(&num);
	printf("num=%d\n",num);
	return 0;
	
 } 
