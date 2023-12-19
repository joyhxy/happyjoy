#include <stdio.h>
#include <stdlib.h>
int units=0;
void critic(void);
int main()
{
	//exturn int units;
	printf("how many numbers do you guess?\n");
	
	while(units!=56)
	critic();
	printf("you must have looked it up!\n");
	
	return 0;
}
void critic(void)
{
	printf("no luck!");
    scanf("%d",&units);
}




