/*isomorphic strings*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	char s1[10],s2[10];
	printf("Enter string size : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter first string :");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("Enter second string : ");
	scanf("%[^\n]s",s2);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s1[j]==s1[i])
			{
				if(s2[j]==s2[i])
				{
					;
				}
				else 
				{
					printf("It is not isomorphic ");
					return 0;
				}
			}
		}
	}
	if(i==n)
	{
		printf("It is isomorphic");
	}
	return 0;
}
