 #include <stdio.h>
 int print(int*arr)
{
	int i=0; 
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void exchange(int*arr1,int*arr2)
{
	int i=0;
	for(i=0;i<5;i++)
	{
	int gap;
	gap=arr1[i];
	arr1[i]=arr2[i];
	arr2[i]=gap;
    }
	
}
int main()
{
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	exchange(arr1,arr2);
	print(arr1);
	print(arr2);
	return 0;
}

	
