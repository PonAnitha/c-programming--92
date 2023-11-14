/*reverse a string*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,l,t;
	printf("Enter string : ");
	fgets(str,sizeof(str),stdin);
	l=strlen(str);
	for(i=0;i<(l/2);i++)
	{
		t=str[i];
		str[i]=str[l-i-1];
		str[l-i-1]=t;
	}
	printf("Reversed string is %s",str);
	return 0;
}
