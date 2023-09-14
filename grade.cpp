/*calculating the percentage and grade*/
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,tot;
	float per;
	printf("Enter your marks in five subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	tot=m1+m2+m3+m4+m5;
	per=tot/5;
	if(per>=90)
	printf("The grade obtained by the student is A");
	else if(per>=80)
	printf("The grade obtained by the student is B");
	else if(per>=70)
	printf("The grade obtained by the student is C");
	else if(per>=60)
	printf("The grade obtained by the student is D");
	else if(per>=50)
	printf("The grade obtained by the student is E");
	else
	printf("The grade obtained by the student is F");
	return 0;
}
