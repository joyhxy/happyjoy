#include <stdio.h>

 int main()
 {
    char ch;
    int a,e,i,o,u;
    a=e=i=o=u=0;
    printf("enter some text ;enter # to quit.\n");
    while((ch=getchar())!='#')
    {
    	switch(ch)
    	{
    		case'a':
    		case'A':
			a++;
    		break;
    		case'e':
    		case'E':
			e++;
    		break;
			case'i':
    		case'I':
			i++;
    		break;
			case'o':
    		case'O':
			o++;
    		break;
			case'u':
    		case'U':
			u++;
    		break;
    		default:
    		break;
    	}
	}
	printf("number of vowels:A    E    I    O    U\n");
	printf("               %4d %4d %4d %4d %4d\n",a,e,i,o,u);
	return 0;
 }
