/*removing white spaces*/
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
		if(str[i]==32)
		{
			for(j=i;j<l-1;j++)
			{
				str[j]=str[j+1];
			}
			str[l-1]='\0';
			l--;
		}
	}
	printf("The new string after removing spaces is %s ",str);
	return 0;
}
