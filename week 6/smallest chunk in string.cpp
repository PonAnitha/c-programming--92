/*smallest chunk*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,c=0,n,min;
	int a[10];
	char s1[100];
	printf("Enter size : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter string : ");
	scanf("%[^\n]s",s1);
	for(i=0;i<n;i++)
	{
		while(s1[i]!=32&&s1[i]!=32)
		{
			c++;
		}
		a[i]=c;
		c=0;
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Index is %d ",i-a[i]+1);
	return 0;
}
