/*concating strings*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="hello";
	char s2[]="hi";
	int i,j=0,l;
    l=strlen(s1);
	i=l+1;
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	printf("Concated string : %s",s1);
	return 0;
}
