/*first occurence*/
#include<stdio.h>
int main()
{
	char str[100];
	int i,k;
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	printf("Enter any character to find its first occurence : ");
	scanf("%c",&k);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==k)
		{
			printf("%d",i);
			goto exit;
		}
	}
	exit : 
	     ;
    return 0;
}
