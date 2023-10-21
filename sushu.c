int main()
{
	int i=100;
	for(i=100;i<=200;i++)
	{
		int j=2;
	    for(j=2;j<=i;j++)
	    {   if(i==j)
		    printf("%d ",i);
	    	if(i%j==0)
	    	break;
			
		}
		
	}
	return 0;
}
