/*Electricity bill*/
#include<stdio.h>
int main()
{
	int n,r,total;
	printf("Enter the number of units consumed :");
	scanf("%d",&n);
	if(n<100)
	r=10;
	else if(100<=n && n<200)
	r=20;
	else if(200<=n && n<300)
	r=30;
	else if(300<=n && n<400)
	r=40;
	else
	r=50;
	total=n*r;
	printf("The total amount is Rs%d\n",total);
}
