/*palindrome or not*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="madam";
	char s2[100];
	int l,i,t,k;
	strcpy(s2,s1);
	l=strlen(s1);
	for(i=0;i<(l/2);i++)
	{
		t=s1[i];
		s1[i]=s1[l-i-1];
		s1[l-i-1]=t;
	}
	k=strcmp(s1,s2);
	if(k==0)
	{
		printf("Palindrome");
	}
	else 
	{
		printf("Not a palindrome");
	}
	return 0;
}
