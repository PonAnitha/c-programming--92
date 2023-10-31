/*first repeating element*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The first repeating element is : ");
	for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			printf("%d");
    			goto exit;
			}
		}
	}
	exit:
		;
	return 0;
}
