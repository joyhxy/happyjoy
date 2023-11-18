#include <stdio.h>

 int main()
 {
 	int size=15;
 	float cost=0;
 	float bill=0;
    if (size>12)
	goto a;
	a:cost=cost*1.05;
	int flag=2;
	b:bill=cost*flag;
	return 0;
 }
