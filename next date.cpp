/*printing next day*/
#include<stdio.h>
int main()
{
	int d,m,y;
	printf("Enter the day,month,year: ");
	scanf("%d%d%d",&d,&m,&y);
	if(d==31 &&(m==1||m==3||m==5||m==7||m==8||m==10))
		{
			printf("The next date is 1.%d.%d",m+1,y);	
		}
	else if(d==31 && m==12)
		{
			printf("The next date is 1.1.&d",y+1);
		}
	else if(d==30 && (m==4||m==6||m==9||m==11))
		{
			printf("The next date is 1.&d.%d",m+1,y);
		}
	else if(d<=29 && m!=2)
		{
			printf("The next date is %d.%d.%d",d+1,m,y);
		}
	else if(d==30 && (m==1||m==3||m==5||m==7||m==8||m==10))
		{
			printf("The next date is 31.%d.%d",m,y);
		}
	else if(m==2)
	    {
	    	if(y%4==0 && (y%100!=0 || y%400==0 ))
	    	{
	    		if(d==29)
	    		printf("The next date is 1.3.%d",y);
	    		else if(d<=28)
	    		printf("The next date is %d.%d.%d",d+1,m,y);
	    		else
	    		printf("Invalid date entered ");
			}
			else 
			{
				if(d==28)
				printf("The next date is 1.3.%d",y);
				else if(d<=27)
				printf("The next date is %d.%d.%d",d+1,m,y);
				else 
				printf("Invalid date entered");
			}
		}
	else 
		{
			printf("Invalid date entered");
		}
	return 0;
}
