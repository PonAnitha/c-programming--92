/*simple and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
	int p,n,r;
	float si,ci,amt;
	printf("Enter the values of principle, number of years,rate of interest:");
	scanf("%d%d%d",&p,&n,&r);
	si=(p*n*r)/100;
	amt=p* pow((1+(r/100)),n);
	ci=p-amt;
	printf("The simple interest is=%f\n",si);
	printf("The compound interest is =%f\n",ci);
	return 0;
}
