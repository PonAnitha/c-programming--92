/*type of triangle*/
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the sides of triangle:");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b && b==c && c==a)
	printf("The given triangle is equilateral ");
	else if((a==b && b!=c)|(b==c && c!=a)|(c==a && a!=b))
	printf("The given triangle is isoceles");
	else
	printf("The given triangle is scalene");
	return 0;
}
