/*sum of first and last digit*/
#include<stdio.h>
int main()
{
	int n,t,u,f,sum;
	printf("Enter any number :");
	scanf("%d",&n);
   	u=n%10;
	while(n>10)
	{
	t=n/10;
	n=n/10;
    }
	f=t;
	sum=f+u;
	printf("The first digit of number is %d\n",f);
	printf("The last digit of number is %d\n",u);
	printf("The sum of first and last is %d\n",sum);
	return 0;

}
