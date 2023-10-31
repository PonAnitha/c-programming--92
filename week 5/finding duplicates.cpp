/*find duplicate elements*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,c=0;;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The duplicate elements are :\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
			   printf("%d  ",a[i]);
			   break;
			}
			break;
		}
	}
	return 0;
}
