#include<stdio.h>
int main()
{
	int age;
	printf("Do you want to vote");
	printf("\nEnter your age");
	scanf("%d",&age);
	if(age<18)
	{
		printf("You are not eligible to vote");
	}
	else
	{
		printf("You are eligible to vote");
	}
}
