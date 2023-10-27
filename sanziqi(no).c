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
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("三子棋\n");
			break;
		case 0:
		    printf("退出游戏\n");
		    break;
		default:
			printf("选择错误，请重新选择：\n");
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
	printf("玩家走：>\n");
	while(1)
	{
		printf("请输入要下的坐标：>");
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
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非标，请重新输入：\n");
		}
	 } 
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("电脑走：>\n");
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



