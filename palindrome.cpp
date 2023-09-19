/*palindrome or not*/
#include<stdio.h>
int main()
{
	int n,t,r,original;
	r=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	original=n;
	for(t=n;n!=0;n=n/10)
	{
	t=n%10;
	r=r*10+t;
    }
    printf("The reversed number is= %d\n",r );
    if(original==r)
    printf("Both the number and its reverse are the same.\nSo ,the given number is a palindrome ");
    else 
    printf("Both the given number and its reverse are not the same.\nSo the given number is not a palindrome");
    return 0;
	
	
}
