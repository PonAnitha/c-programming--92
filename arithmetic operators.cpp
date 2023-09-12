/*arithmetic operators*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("Enter any two integers : ");
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	printf("The sum of two integers is= %d\n",c);
	printf("The difference of two integers is= %d\n",d);
	printf("The product of integers is = %d\n",e);
	printf("The quotient of integers is =%d\n",f);
	printf("The modulo of integers is =%d\n",g);
	return 0;
}
