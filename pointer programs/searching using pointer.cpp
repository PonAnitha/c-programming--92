/*searching an element using pointers*/
#include<stdio.h>
void search(int *,int,int);
int main()
{
	int n,i,k;
	printf("Enter size : ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search : ");
	scanf("%d",&k);
	search(&arr[0],n,k);
	return 0;
}
void search(int *x,int n,int k)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(x+i)==k)
		{
			printf("YES");
			goto exit;
		}
		if(i==n-1)
		{
			printf("NO");
		}
	}
	exit:
		;
}

