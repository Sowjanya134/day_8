#include<stdio.h>
int main()
{
	int a=40;
	int b=20;
	int stmt=a>b;
	
	printf("the value of A:%d\n",a);

	stmt=(a>b);
	printf("the output of stmt is :%d", !(a>b));
	return 0;
}
