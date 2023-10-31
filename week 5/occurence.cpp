/*occurence*/
#include<stdio.h>
int main()
{
	int a[100];
	int n,i,j,k,c=0;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the elements of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element whose occurence is to be found : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	    	c++;
		}
	}
	printf("The occurence of %d in array is %d",k,c);
	return 0;

}
