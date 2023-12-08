/*length of last word*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,c=0,i;
	char s1[100];
	printf("Enter size : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter string : ");
	scanf("%[^\n]s",s1);
    for(i=n-1;s1[i]!=32;i--)
    {
    	c++;
	}
	printf("Length of last word is : %d ",c);
	return 0;
}
