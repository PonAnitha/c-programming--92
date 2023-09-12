/*salary of employee*/
#include<stdio.h>
int main()
{
	float bp,r,h,d,t,total;
	printf("Enter your basic pay and your city code:");
	scanf("%f%f",&bp,&r);
	d=0.48*bp;
	t=0.2*bp;
	if(r=1)
	h=0.25*bp;
	else if(r=2)
	h=0.2*bp;
	else if(r=3)
	h=0.15*bp;
	else
	h=0.1*bp;
	total=bp+h+d+t;
	printf("The gross pay of the employee is = Rs.%f\n",total);
	return 0;
}
