/*sorting words in a string*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,i,j;
	char t;
	char str[5][10],s[20];
	printf("Enter number of words: ");
	scanf("%d",&n);
	printf("Enter names : ");
	for(i=0;i<n;i++)
	{
		scanf("%[^\n]s",str[i]);
		fflush(stdin);
	}
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    	   if(strcmp(str[i],str[j])<0)
    	   {
    	   	  strcpy(s,str[i]);
    	   	  strcpy(str[i],str[j]);
    	   	  strcpy(str[j],s);
		   }
		}
	}
	printf("The arrays after word  sorting is :\n ");
	{
		for(i=0;i<n;i++)
		{
			printf("%s",str[i]);
		}
	}
}
