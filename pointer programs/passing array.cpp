/*passing array to a funtion*/
#include<stdio.h>
void display(int *,int);
int main()
{
	int arr[5]={1,2,3,4,5};
	display(&arr[0],5); 
	return 0;
}

void display(int*ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",*ptr);
		ptr++;
	}
}
