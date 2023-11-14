/*length of string*/
#include<stdio.h>
int main()
{
	char str[100];
	int i,l=0;
	printf("Enter a string : ");
	fgets(str,sizeof(str),stdin);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("The length of string is %d",l-1);
	return 0;
}
