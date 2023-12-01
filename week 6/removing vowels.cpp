/*deleting vowels in string*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter string : ");
	scanf("%[^\n]s",str);
	int i,j,t;
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			for(j=i;j<l;j++)
			{
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;
			}
			l--;
		}
	}
	printf("The string after removing vowels is %s ",str);
	return 0;
}
