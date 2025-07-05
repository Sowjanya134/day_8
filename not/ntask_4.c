#include<stdio.h>
int main()
{
	int a=45;
	int b=50;
	int c=30;
	int d=20;
	int stmt_1=!(a<=b);
	int stmt_2=!(d>=c);
	
	printf("stmt_1 is :%d",stmt_1);
	printf("stmt_2 is :%d",stmt_2);
	
	return 0;
}