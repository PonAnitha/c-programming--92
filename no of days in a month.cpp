/*finding number of days by month number and year*/
#include<stdio.h>
int main()
{
	int y,n;
	printf("Enter the year and month code :");
	scanf("%d%d",&y,&n);
	if((y%4==0)&&((y%100!=0)||(y%400==0)))
	{
	    printf("It is a leap year\n");
	    if(n==1 ||n==3 || n==5|| n==7||n==8||n==10||n==12)
	    printf("The number of days is 31");
    	else if(n==4||n==6||n==9||n==11)
	    printf("The number of days is 30");
    	else
    	printf("The number of days is 29");
    }
    else
    {
    	printf("It is not a leap year\n");
    	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    	printf("The number of days is 31");
    	else if(n==4||n==6||n==9||n==11)
    	printf("The number of days is 30");
    	else
    	printf("The number of days is 28");
    }
    return 0;
	
}
