/*swaping without using a third variable*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two integers :");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The integers after swaping is=%d %d",a,b);
	return 0;
}
