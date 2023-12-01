/*counting number of words*/
#include<stdio.h>
#include<string.h>
int main()
{
	int c=0,i,l;
	char str[100];
	printf("enter string : ");
	scanf("%[^\n]s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]==32)
		{
			c++;
		}
	}
	printf("The number of words in string is %d",c+1);
	return 0;
}
