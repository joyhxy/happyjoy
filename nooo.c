int mystrlen(char* str)
{
	if(*str!='\0')
	    return 1+mystrlen(str=1);
	else
	    return 0;	 
}


int main()
{
	char arr[]="bit";
	//scanf("%c",arr);
	int len=mystrlen(arr);
	printf("len=%d\n",len);
	return 0;
	
}
