#include <stdio.h>
 int init(int*arr)
 {
 	int i;
 	for(i=0;i<10;i++)
 	{
 		arr[i]=0;
 		//printf("%d ",arr[i]);
	 }
	 //printf("\n");
 }
int print(int*arr)
{
	int i=0; 
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int reverse(int*arr)
 {
 	int left=0;
 	int right=9;
 	for(left=0,right=9;left<right;left++,right--)
 	{
 		int gap=arr[left];
 		arr[left]=arr[right];
 		arr[right]=gap;
	 }
 }
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	print(arr);
	reverse(arr);
	print(arr);
	init(arr);
	print(arr);
	return 0;
}
