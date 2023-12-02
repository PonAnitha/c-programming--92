/*removing repeated characters*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter string : ");
	scanf("%[^\n]s",str);
	int l,i,j,k,t;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(str[i]==str[j])
			{
			    for(k=j;k<l-1;k++)	
			    {
			    	t=str[k];
			    	str[k]=str[k+1];
			    	str[k+1]=t;
				}
				
				str[l-1]='\0';
			}
		}
	}
	printf("The new string after removing duplicates is %s ",str);
	return 0;
}
