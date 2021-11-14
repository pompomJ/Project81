#include <stdio.h>

int main()
{
	int a, sum, i;

	sum = 0;

	printf("10ŒÂ‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a);
		sum += a;
	}

	printf("%d\n", sum);

	return 0;
}