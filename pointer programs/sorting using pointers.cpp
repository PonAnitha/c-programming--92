/*sorting arrays using pointers*/
#include<stdio.h>
void sort(int *,int);
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
	sort(&arr[0],n);
	printf("New array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
void sort(int *x,int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(x+j)>*(x+j+1))
			{
				t=*(x+j);
				*(x+j)=*(x+j+1);
				*(x+j+1)=t;
			}
		}
	}
}
