/*circular shift using pointers*/
#include<stdio.h>
void shift(int*,int*,int*);
int main()
{
	int x,y,z;
	printf("Enter any three integers ");
	scanf("%d%d%d",&x,&y,&z);
	shift(&x,&y,&z);
	printf("The values after right shift is : %d %d %d ",x,y,z);
	return 0;
}
void shift(int*x,int*y,int*z)
{
	int t;
	t=*y;
	*y=*x;
	*x=*z;
	*z=t;
}
