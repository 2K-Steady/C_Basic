#include <stdio.h>

//����1  7�� 9�� ��� ��� ��ġ�� ���ڴ� �ѹ��� ����ǵ��� �Ѵ�.
//void main()
//{
//	int  i;
//
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 7 == 0 || i % 9 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//}

//����2 �ΰ��� ������ �Է�, �μ��� ���� ���
//������ ū������ �������� ������.

//void main()
//{
//	int inputNum1, inputNum2;
//
//	printf("2���� ���� �Է�: ");
//	scanf_s("%d %d", &inputNum1, &inputNum2);
//
//	while (inputNum1 == inputNum2)
//	{
//		printf("������ �ٽ� �Է����ּ���\n");
//		printf("2���� ���� �Է�: ");
//		scanf_s("%d %d", &inputNum1, &inputNum2);
//	}
//
//	if (inputNum1 > inputNum2)
//	{
//		printf("�� ������ ��: %d\n", inputNum1 - inputNum2);
//	}
//	else if (inputNum2 > inputNum1)
//	{
//		printf("�� ������ ��: %d\n", inputNum2 - inputNum1);
//	}
//}

//����3 �л��� ��ü ��������� ���� ���� ���
//��� 90 �̻� A  , 80�̻� B , 70�̻� C , 50�̻� D , 50�̸� F
//���� ���� �������� 
//
//void main()
//{
//	int korean, english, math;
//	int resultScore = 0;
//
//	printf("���� 3�� �Է�: ");
//	scanf_s("%d %d %d", &korean, &english, &math);
//
//	resultScore = (korean + english + math) / 3;
//
//	printf("�������: %d\n", resultScore);
//
//	if (resultScore >= 90)
//		printf("A\n");
//	else if (resultScore >= 80)
//		printf("B\n");
//	else if (resultScore >= 70)
//		printf("C\n");
//	else if (resultScore >= 50)
//		printf("D\n");
//	else if (resultScore < 50)
//		printf("F\n");
//}