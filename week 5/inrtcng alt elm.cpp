/*interchange alt elements*/
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
	for(i=0;i<n;i=i+2)
	{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("The new array after interchanging alt. elements is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	return 0;
}
