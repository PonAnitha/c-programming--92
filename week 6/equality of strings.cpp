/*comparing strings*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s1[100],s2[100];
	int i;
	printf("Enter the first string : ");
	fgets(s1,sizeof(s1),stdin);
	fflush(stdin);
	printf("Enter the second string : ");
	fgets(s2,sizeof(s2),stdin);
	for(i=0;s1[i]!=0;i++)
	{
		if(s1[i]==s2[i])
		{
			;
		}
		if(s1[i]!=s2[i])
		{
			printf("They are not equal ");
			goto exit;
		}
	}
	if(s1[i]==0)
	{
		printf("They are equal ");
	}
	exit:
		;
	return 0;
}
