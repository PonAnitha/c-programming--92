/*most and least reapeated characters */
#include<stdio.h>
#include<string.h>
int main()
{
	int a[100];
	char str[100];
	printf("Enter string : ");
	scanf("%[^\n]s",str);
    int l,i,c,t,m=0,j,k;
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
				a[m]=c;
				m++;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
