/*pattern 22*/
#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		for(j=0;j<7;j++)
		{
			if(j<6)
			printf("%d",c);
			else
			printf("%d",c+1);
		}
		c++;
    	}
		else
		{
		for(j=0;j<7;j++)
		{
			if(j=0)
			printf("%d",c+1);
			else
			printf("%d",c);
		}
		c++;
    	}
		printf("\n");
	}
	return 0;
}
