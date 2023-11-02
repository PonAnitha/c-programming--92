/*copying one to other*/
#include<stdio.h>
int main()
{
	int a[10];
	int b[10];
	int n,i;
	printf("Enter the size of array : ");
	scanf("%d",&n);
		printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	printf("The elements of other array are : ");
	for(i=0;i<n;i++)
	{
		printf("%d  ",b[i]);
	}
	return 0;
}
