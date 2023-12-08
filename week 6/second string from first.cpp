/*forming second name from first*/
#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	char s1[10],s2[10];
	printf("Enter size of  first name : ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("Enter first name : ");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("Enter size of second name : ");
	scanf("%d",&n2);
	fflush(stdin);
	printf("Enter second name : ");
	scanf("%[^\n]s",s2);
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(s2[i]==s1[j])
			{
				break;
			}
		}
		if(j==n1)
		{
			printf("Not possible");
			return 0;
		}
	}
	if(i==n2)
	{
		printf("Possible");
	}
	return 0;
}
