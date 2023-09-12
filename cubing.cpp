/*cube*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,cube;
	printf("Enter a integer: ");
	scanf("%d",&a);
	cube=pow(a,3);
	printf("The cube of the given number is %d\n",cube);
	return 0;
}
