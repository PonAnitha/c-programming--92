/*inserting character*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,l,p;
	char str[100],k;
	printf("Enter the string : ");
	scanf("%[^\n]s",str);
	fflush(stdin);
	l=strlen(str);
    printf("Enter character : ");
    k=getchar();
    printf("Enter position : ");
    scanf("%d",&p);
    for(i=l;i>=p;i--)
    {
    	str[i]=str[i-1];
	}
	str[i]=k;
	l++;
	str[l]='\0';
	printf("New string is %s",str);
	return 0;
}
