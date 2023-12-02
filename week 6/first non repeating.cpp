/*first non repeating character*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	int l,i,j;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			break;
			if(j==l-1)
			{
			printf("%c ",str[i]);
			goto exit;
    		}
		}
	}
	exit:
		;
	return 0;
}
