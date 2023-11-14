/*inserting new character*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,k,p,l;
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	printf("Enter character to insert : ");
	scanf("%c",&k);
	printf("Enter the position to insert : ");
	scanf("%d",&p);
	l=strlen(str);
	i=l;
	while(i>=p)
	{
		str[i]==str[i-1];
		i--;
	}
	str[p-1]=k;
	printf("String after inserting is : %s",str);
	return 0;
}
