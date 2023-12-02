/*counting alphbets,digits and spaces*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("Enter string : ");
	scanf("%[^\n]s",str);
	int i,l,a=0,d=0,w=0;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if((65<=str[i]&&str[i]<=90)||(97<=str[i]&&str[i]<=122))
		{
			a++;
		}
		if(48<=str[i]&&str[i]<=57)
		{
			d++;
		}
		if(str[i]==32)
		{
			w++;
		}
	}
	printf("%d  %d  %d",a,d,w);
	return 0;
    
}

