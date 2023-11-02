/*identity matrix*/
#include<stdio.h>
int main()
{
	int a[10][10];
	int n,i,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    scanf("%d",&a[i][j]);	
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]==1)
				{
				   ;
	    		}
	    		else
	    		{
	    			printf("It is not an identity matrix");
	    			goto exit;
				}
			}
			else
			{
				if(a[i][j]==0)
				{
					;
		    	}
		    	else
		    	{
		    		printf("It is not an identity matrix");
		    		goto exit;
				}
			}
		}
	}
	if(i==n)
	{
		printf("It is an identity matrix");
	}
	exit:
		;
	return 0;	
}
