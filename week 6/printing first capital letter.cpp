/*printing first capital letter*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	int i,l;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(65<=str[i]&&str[i]<=90)
		{
			printf("%c",str[i]);
			goto exit;
		}
	}
	exit:
		;
	return 0;
}
