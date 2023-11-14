/*capitalising*/
#include<stdio.h>
int main()
{
	char str[]="hi hello bye";
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)
		{
			str[0]=str[0]-32;
		}
		if(str[i]==' ')
		{
			str[i+1]=str[i+1]-32;
		}
	}
	return 0;
}
