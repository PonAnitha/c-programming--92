/*number to day*/
#include<stdio.h>
int main()
{
	int d;
	printf("Enter a number (between 1 and 7):");
	scanf("%d",&d);
	switch(d)
	{
		case 1:printf("It is monday");
		       break;
	    case 2:printf("It is tuesday");
	           break;
	    case 3:printf("It is wednesday");
	           break;
	    case 4:printf("It is thursday");
	           break;
	    case 5:printf("It is friday");
	           break;
	    case 6:printf("It is saturday");
	           break;
	    case 7:printf("It is sunday");
	           break;
	    default:printf("The entered number is invalid");
	}
	return 0;
}
