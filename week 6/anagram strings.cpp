/*anagram strings*/
#include<stdio.h>
int main()
{
	int n1,n2,i,j;
	char s1[10],s2[10];
	printf("Enter size of  first string : ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("Enter first string : ");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("Enter size of second string : ");
	scanf("%d",&n2);
	fflush(stdin);
	printf("Enter second string : ");
	scanf("%[^\n]s",s2);
	if(n1!=n2)
	{
		printf("Not anagrams");
		return 0;
	}
	else
	{
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(s1[i]==s2[j])
			{
				break;
			}
		}
		if(j==n1)
		{
			printf("Not anagram ");
			return 0;
		}
	}
    }
	if(i==n1)
	{
		printf("Anagrams of each other");
	}
	
	return 0;
}
