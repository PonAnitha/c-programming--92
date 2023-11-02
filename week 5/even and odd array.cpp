/*even and odd*/
#include<stdio.h>
int main()
{
	int a[100],b[100],c[100];
	int i,j=0,k=0,m,n,p;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the number of even and odds : ");
	scanf("%d%d",&m,&p);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			j++;	
		}
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("The array of even elements is: ");
	for(j=0;j<m;j++)
	{
		printf("%d  ",b[j]);
	}
	printf("\n");
	printf("The array of odd elements is: ");
	for(k=0;k<p;k++)
	{
		printf("%d  ",c[k]);
	}
	return 0;
}
