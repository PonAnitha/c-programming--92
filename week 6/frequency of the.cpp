/*finding frequency of the*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	int i,c=0,l;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]=='t')
		{
			if(str[i+1]=='h')
			{
				if(str[i+2]=='e')
				{
					if(str[i+3]==' ')
					{
						c++;
					}
				}
			}
		}
	}
	printf("The frequency of the is %d ",c);
	return 0;
}
