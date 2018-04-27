#include <stdio.h>

void main()
{
	int num1, num2;

	int sum;

	printf("첫번째 정수를 입력: ");
	scanf_s("%d", &num1);

	printf("입력된 값: %d\n", num1);

	printf("두번째 정수를 입력: ");
	scanf_s("%d", &num2);

	if (num1 < num2)
	{
		sum = num2 - num1;
	}
	else if (num2 < num1)
	{
		sum = num1 - num2;
	}
	else if (num1 == num2)
	{
		sum = 0;
	}

	printf("두 정수의 차 = %d\n", sum);
}