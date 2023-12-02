/*copying arrays using pointers*/
#include<stdio.h>
void copy(int *,int*,int);
int main()
{
   int n,i;
   printf("Enter size of array : ");
   scanf("%d",&n);
   int a[n];
   int b[n];
   printf("Enter first array : ");
   for(i=0;i<n;i++)
   {
   	    scanf("%d",&a[i]);
   }
   copy(&a[0],&b[0],n);
   printf("Second array is :\n ");
   for(i=0;i<n;i++)
   {
   	  printf("%d ",b[i]);
   }
   return 0;
}
void copy(int *a,int *b,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	   *(b+i)=*(a+i);
	}
}
