#include <stdio.h>

int main()
{
	int a, sum, i;

	sum = 0;

	printf("10�̐�������͂��Ă��������B\n");

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a);
		sum += a;
	}

	printf("%d\n", sum);

	return 0;
}