/*greatest of three numbers */
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three integers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	printf("The greatest among three is %d\n ",a);
	else if (b>c)
	printf("The greatest of the three is %d\n",b);
	else
	printf("The greatest of the three is %d\n",c);
	return 0;
}
