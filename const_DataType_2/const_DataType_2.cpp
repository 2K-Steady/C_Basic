#include <stdio.h>

void main()
{
	int num1, num2, num3, num4;

	double actNum1, actNum2;

	

	printf("���� 2�� �Է�: ");

	scanf_s("%d %d", &num1, &num2);

	printf("�Էµ� ����: %d, %d\n", num1, num2);

	num3 = num1 / num2;

	printf("ù��° ���� �ι�° ���� ���� ��: %d\n", num3);

	actNum1 = (double)num1;
	printf("ù��° ���� �Ǽ��� ��ȯ: %.2f\n", actNum1);

	actNum2 = actNum1 / num2;
	printf("�ι�°���� ù��° ���� ���� ��: %.2f\n", actNum2);
	
	
}