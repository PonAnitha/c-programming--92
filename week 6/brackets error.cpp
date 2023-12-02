/*brackets*/
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
		if(str[i]==40)
		{
			for(j=i+1;j<l;j++)
			{
				if(str[j]==41)
				{
					printf("VALID");
					goto exit;
				}
				if(j==l-1)
				{
					printf("INVALID");
				}
			}
		}
		if(str[i]==60)
		{
			for(j=i+1;j<l;j++)
			{
				if(str[j]==62)
				{
					printf("VALID");
					goto exit;
				}
				if(j==l-1)
				{
					printf("INVALID");
				}
			}
		}
		if(str[i]==91)
		{
			for(j=i+1;j<l;j++)
			{
				if(str[j]==93)
				{
					printf("VALID");
					goto exit;
				}
				if(j==l-1)
				{
					printf("INVALID");
				}
			}
		}
		if(str[i]==123)
		{
			for(j=i+1;j<l;j++)
			{
				if(str[j]==125)
				{
					printf("VALID");
					goto exit;
				}
				if(j==l-1)
				{
					printf("INVALID");
				}
			}
		}
	}
	exit:
		;
	return 0;
}

