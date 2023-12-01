/*counting v,c,d,w*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,v=0,c=0,d=0,w=0,l;
	printf("Enter string : ");
	l=strlen(str);
    scanf("%[^\n]s",str);
    for(i=0;i<l;i++)
    {
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    	{
    		v++;
		}
		if((65<=str[i]<=90||97<=str[i]<=122)&&(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U'))
		{
			c++;
		}
		if(48<=str[i]<=57)
		{
			d++;
		}
		if(str[i]==32)
		{
			w++;
		}
	}
	printf("v=%d  c=%d  d=%d   w=%d",v,c,d,w);
	return 0;
}
