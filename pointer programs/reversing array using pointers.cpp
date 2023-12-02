/*reversing an array using pointer*/
#include<stdio.h>
void rev(int*,int);
int main()
{
	int n,i;
	printf("Enter size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	rev(&arr[0],n);
	printf("New string after reversing is : \n");
		for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void rev(int*x,int n)
{
	int i,t;
	for(i=0;i<(n/2);i++)
	{
		t=*(x+i);
		*(x+i)=*(x+n-i-1);
		*(x+n-i-1)=t;
	}
}
