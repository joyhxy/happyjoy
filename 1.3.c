#include <stdio.h>
#define basis 10
#define hours 40.0 
#define multiple 1.5
#define tax1 0.15
#define tax2 0.20
#define tax3 0.25
#define stage1 300.0
#define stage2 450.0 
int main()
{
	float hour,salary,tax,income;
	printf("Please enter your work hours of a week:");
	scanf("%f",&hour);
	if(hour<=hours)
		salary=hour*basis;
	else
	    salary=basis*hours+(hour-hours)*multiple*basis;
	if(salary<=stage1)
	    tax=salary*tax1;
	else if(salary<=stage2)
	    tax=stage1*tax1+(salary-stage1)*tax2;
	else 
	    tax=stage1*tax1+(stage2-stage1)*tax2+(salary-stage2)*tax3;
	income=salary-tax;
	printf("your salary:%.2f\n",salary);
	printf("your tax   :%.2f\n",tax);
	printf("your income:%.2f\n",income);
	return 0;
	    
	
}
