int main()
{
	char arr[20]={0};
	char password[20]={0};
	int i=0;
	for(i=0;i<3;i++)
	{
		scanf("%s",&password);
		if(strcmp(password,"11224455")==0)
		printf("bingo~\n");
		else
		printf("sorry,error\n");
	}
	if(i==3)
	{
	printf("byebye~\n");
    }
	
 } 
