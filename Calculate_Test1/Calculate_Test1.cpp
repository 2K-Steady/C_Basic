#include <stdio.h>

void main()
{
	int korean, english, math, computer;

	int sum, avg;

	printf("���� ���� �Է� \n");
	printf("����: ");
	scanf_s("%d", &korean);

	printf("����: ");
	scanf_s("%d", &english);

	printf("����: ");
	scanf_s("%d", &math);

	printf("��ǻ��: ");
	scanf_s("%d", &computer);

	printf("\n�Էµ� ����\n\n ����: %d\n ����: %d\n ����: %d\n ��ǻ��: %d\n\n", korean, english, math, computer);

	sum = korean + english + math + computer;
	avg = sum / 4;
	printf("���� ����: %d\n", sum);
	printf("��� ����: %d\n", avg);

}