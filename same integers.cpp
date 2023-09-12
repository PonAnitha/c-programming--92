/*check if three numbers are equal*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any three integers:");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("All the three integers are same ");
	else
	printf("All the three integers  are not same ");
	return 0;
}
