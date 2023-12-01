/*print vowels*/
#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			printf("%c  ",str[i]);
		}
	}
	return 0;
}
