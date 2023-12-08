/*remove characters from first string present in second*/
#include<stdio.h>
int main()
{
	int n1,n2,i,j,k,t;
	char s1[10],s2[10];
	printf("Enter size of  first string : ");
	scanf("%d",&n1);
	fflush(stdin);
	printf("Enter first string : ");
	scanf("%[^\n]s",s1);
	fflush(stdin);
	printf("Enter size of second string : ");
	scanf("%d",&n2);
	fflush(stdin);
	printf("Enter second string : ");
	scanf("%[^\n]s",s2);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(s1[i]==s2[j])
			{
				for(k=i;k<n1;k++)
				{
					t=s1[k];
					s1[k]=s1[k+1];
					s1[k+1]=t;
				}
				n1--;
				i--;
			}
		}
	}
	printf("The string after removing is : %s",s1);
	return 0;
}
