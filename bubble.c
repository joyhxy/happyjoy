void bubble_sort(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz-1;i++)
	{
		int flag=1;
		int j=0;
		for(j=0;j,sz-1-i;j++)
		{
			if(arr[i]>arr[i+1])
		{
			int tam=0;
			tam=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=tam;
			flag=0; 
		 } 
		}
		if(flag==1)
		{
			break;
		}
	}
 } 
 int main()
 {
 	int arr[]={9,8,7,6,5,4,3,2,1,0};
 	int i=0;
 	int sz=sizeof(arr)/sizeof(arr[0]);
 	bubble_sort(arr,sz);
 	for(i=0;i<sz;i++)
 	{
	 printf("%d",arr[i]);
 }
 return 0;
 }
