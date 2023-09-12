/*percentage calculation*/
#include<stdio.h>
int main()
{
	int a,b,c,d,e,tot,per;
	printf("Enter your score in 5 subjects :");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	tot=a+b+c+d+e;
	per=tot/5;
	printf("The percentage obtained by the student is=%%d\n",per);
	return 0;
}
