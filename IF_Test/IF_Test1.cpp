#include <stdio.h>

void main()
{
	int num1, num2;

	int sum;

	printf("ù��° ������ �Է�: ");
	scanf_s("%d", &num1);

	printf("�Էµ� ��: %d\n", num1);

	printf("�ι�° ������ �Է�: ");
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

	printf("�� ������ �� = %d\n", sum);
}