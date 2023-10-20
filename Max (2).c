int main()
{
    char arr[]={-20,-11,-10};
    int i=0;
    int max=arr[0];
    for(i=0;i<3;i++)
    {
    	if(arr[i]>max)
    	max=arr[i];
	}
	printf("%d",max);
    return 0;
}
