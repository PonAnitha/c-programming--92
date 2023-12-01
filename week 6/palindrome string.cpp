/*palindrome or not */
#include<stdio.h>
#include<string.h>
int main()
{
	int flag,i;
	char str[100];
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]!=str[l-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	printf("Not Palindrome");
	else
	printf("Palindrome");
	return 0;
}
