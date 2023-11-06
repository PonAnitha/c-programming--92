/*distinct absolute elements*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,k,t;
	printf("Enter size : ");
	scanf("%d",&n);
	printf("Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			;
		}
		else
		{
			a[i]=-a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=0;k<n-1;k++)
				{
					t=a[k];
					a[k]=a[k+1];
					a[k+1]=t;
				}
				n--;
				j--;
			}
		}
	}
	printf("No of distinct elements is : %d",n);

	return 0;
}
