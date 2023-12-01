/*arranging in lexicographical order*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char t;
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	int i,j,l;
	l=strlen(str);
	for(i=0;i<l-1;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
		}
	}
	str[l+1]='\0';
	printf("The string after lexicographical sorting is %s",str);
	return 0;
}
