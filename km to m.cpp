/*km to m to cm to mm*/
#include<stdio.h>
int main()
{
	int km,m,cm,mm;
	printf("Enter the distance in km : ");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	mm=cm*10;
	printf("The distance in m is %d\n",m);
	printf("The distance in cm is %d\n",cm);
	printf("The distance in mm is %d\n",mm);
	return 0;
}
