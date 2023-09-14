/*finding best strategy*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the points of each technique: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	printf("first technique is the best to win the match");
	else if(b>c)
	printf("second technique is the best to win the match");
	else
	printf("third technique is the best to win the match");
	return 0;
}
