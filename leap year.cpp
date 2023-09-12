/*leap year or not*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a year :");
	scanf("%d",&n);
	if ((n%4==0)&&((n%100!=0)||(n%400==0)))
	printf("It is a leap year");
	else
	printf("It is not a leap year");
	return 0;
}
