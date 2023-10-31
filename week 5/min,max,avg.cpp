/*min,max,avg*/
#include<stdio.h>
int main()
{
	int a[100];
	int i,n,min,max,s=0,avg;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("The least element of array is : %d\n",min);
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The greatest element in array is %d\n ",max);
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	avg=s/n;
	printf("The average of elements in array is %d\n",avg);
	return 0;
}
