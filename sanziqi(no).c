void menu()
{
	printf("******************\n");
	printf("**1.play  0.exit**\n");
	printf("******************\n");
}
void test()
{
	int input=0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("������\n");
			break;
		case 0:
		    printf("�˳���Ϸ\n");
		    break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}
	while(input);
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
		printf("%c",board[i][j]);
		if(j<col-1)
		    printf("|");
		}
		printf("\n");
	    if(i<row-1)
	    {
		    for(j=0;j<col;j++)
		    {
		    	printf("---");
		    	if(j<col-1)
		    	    printf("|");
		    }
		    printf("\n");
	    }
	}
	
}
void PlayerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("����ߣ�>\n");
	while(1)
	{
		printf("������Ҫ�µ����꣺>");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>1&&y<=col)
		{
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]=='*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ǳ꣬���������룺\n");
		}
	 } 
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("�����ߣ�>\n");
	while(1)
	{
		x=rand()*row;
		y=rand()*col;
		if(board[x-1][y-1]==' ')
		{
			board[x-1][y-1]=='*';
			break;
		}
	}
}



