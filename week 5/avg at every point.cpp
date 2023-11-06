/*average at every point*/
#include<stdio.h>
int main()
{
	int a[10],b[10];
	int n,i,s=0,avg;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
		avg=s/(i+1);
		b[i]=avg;
	}
	printf("The average of the stream at every point is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",b[i]);
	}
	return 0;
}
