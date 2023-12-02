/*program to print frequency of each character*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter string : ");
	scanf("%[^\n]s",str);
	int i,l,j,k,c=1,t;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		c=1;
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
				c++;
				for(k=j;k<l-1;k++)
				{
					t=str[k];
					str[k]=str[k+1];
					str[k+1]=t;
				}
			    str[l-1]='\0';
			    l--;
			}
		}
		printf("The frequency of %c is %d\n",str[i],c);
	}
	return 0;
}
