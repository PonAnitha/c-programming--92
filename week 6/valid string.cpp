/*super ascii string*/
#include<stdio.h>
int main()
{
	int c=1,i,j,k,t,n;
	char s1[100];
	printf("Enter size : ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter string : ");
	scanf("%[^\n]s",s1);
	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(s1[i]==s1[j])
			{
				c++;
				for(k=j;k<n-1;k++)
				{
					t=s1[k];
					s1[k]=s1[k+1];
					s1[k+1]=t;
				}
				n--;
				j--;
			}
		}
		if(c==s1[i]-96)
		{
			;
		}
		else
		{
			printf("Not super ascii");
			return 0;
		}
	}
	if(i==n)
	{
		printf("Super ascii");
	}
	return 0;
}

