/*reversing a valid string*/
#include<string.h>
#include<stdio.h>
int main()
{
	int n,i;
	char s1[100];
	printf("Enter size of string : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter string : ");
	scanf("%[^\n]s",s1);
	for(i=0;i<n;i++)
	{
		if(s1[i]>=48 && s1[i]<=57)
		{
			printf("Invalid string");
			return 0;
		}
	}
	if(i==n)
	{
		strrev(s1);
		printf("%s",s1);
		return 0;
	}
	return 0;
}
