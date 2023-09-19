/*reversing*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,r;
	r=0;
	printf("Enter any number to be reversed : ");
	scanf("%d",&n);
	for(t=n;n!=0;n=n/10)
	{
	t=n%10;
	r=r*10+t;	
	}
	printf("The reversed number is %d",r);
	return 0;
}
