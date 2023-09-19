/*vowel or consonant*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter any alphabet from the keyboard(in lower case) :");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("The entered alphabet is a vowel");
	else
	printf("The entered alphabet is a consonant");
	return 0;
}
