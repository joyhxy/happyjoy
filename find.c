int main()
{
	char arr[]={1,2,3,4,5,6,7,8,9,10};
	int k=7;
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;
	for(left=0;left<sz;left++)
	{
		if(k==arr[left])
		{
			printf("%d\n",left);
			break;
		}
	}
 } 
