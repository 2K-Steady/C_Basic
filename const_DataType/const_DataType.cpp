#include <stdio.h>

void main()
{
	double num1, num2;

	int result1, result2;

	printf("2���� �Ǽ� (double) �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("�Էµ� �Ǽ�: %f, %f\n", num1, num2);

	result1 = num1 * num2; // ��� ���� int ������ ĳ���õ� 

	printf("�� �Ǽ��� ���Ͽ� ������ ��ȯ�� ��: %d\n", result1);

	result2 = (int)num1 * (int)num2; //�� �Ǽ��� int������ ĳ���� �� �� ���ϰԵ� (�� ��� ���� �ս��� Ŀ��)
	printf("�� �Ǽ��� ������ ��ȯ �� ���� ��: %d\n", result2);
}