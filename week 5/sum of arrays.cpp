/*sum of arrays*/
#include<stdio.h>
int main()
{
	int a[100],b[100];
	int n,k=1,s=0,s1,s2,sum,i;
	printf("Size :");
	scanf("%d",&n);
	int j=n-1;
	printf("Elements of first array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements of second array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("The required sum is :\n");
    while(j>=0)
    {
    	s=s+a[j]*k;
    	k=k*10;
    	j--;
	}
	s1=s;
	s=0;
	k=1;
	j=n-1;
	while(j>=0)
	{
		s=s+b[j]*k;
		k=k*10;
		j--;
	}
	s2=s;
	sum=s1+s2;
	printf("%d",sum);
	return 0;
}
