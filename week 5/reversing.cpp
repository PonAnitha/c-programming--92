/*reversing array*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,t;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n/2);i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	printf("The new array after reversing is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
