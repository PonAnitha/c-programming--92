/*check if pangram*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	int l,i,j;
	l=strlen(str);
	for(i=97;i<123;i++)
	{
		for(j=0;j<l;j++)
		{
			if(str[j]==i)
			{
				break;
			}
			if(j==l-1)
			{
				printf("Not a pangram");
				goto exit;
			}
		}
		if(i==122)
		{
			printf("Pangram");
		}
	}
	exit:
		;
	return 0;
}
