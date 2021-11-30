#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	if (n % 2 == 0)
	{
		printf("The number is Even\n");
	}
	else
	{
		printf("The number is odd\n");
	}
}