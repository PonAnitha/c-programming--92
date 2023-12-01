/*capitalise first letter of each word*/
#include<stdio.h>
int main()
{
	char str[100];
	int i;
	printf("Enter string : ");
    scanf("%[^\n]s",str);
   	str[0]=str[0]-32;
    for(i=0;str[i]!='\0';i++)
    {
    	if(str[i]==' ')
    	{
    		str[i+1]=str[i+1]-32;
		}
	}
	printf("The new string is : \n");
	printf("%s",str);
	return 0;
}
