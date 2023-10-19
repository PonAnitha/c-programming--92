/*pattern 16*/
#include<stdio.h>
int main()
{
	int n,i,j,c=1;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i+1;j++)
		{
			printf("%d\t",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
