#include <stdio.h>

//���� 1 �����κ��� ���� ������ �ϳ� �Է� �޾�, ����ŭ "Hello World" ���

//void main()
//{
//	int inputNum1;
//	int countNum1 = 0;
//
//	printf("������ �� �Է�: ");
//	scanf_s("%d", &inputNum1);
//
//	printf("\n�Էµ� ��: %d\n", inputNum1);
//
//	while (countNum1 < inputNum1)
//	{
//		printf("Hello World\n");
//		countNum1++;
//	}
//}

//���� 2 �����κ��� ���� ���� �Է�, �ش� ����ŭ 3�� ��� ��� ex) 5 �Է½� 3,6,9,12,15�� ��µǵ���

//void main()
//{
//	int inputNum;
//	int countNum = 1;
//
//	printf("���� ���� �Է�: ");
//	scanf_s("%d", &inputNum);
//
//	printf("�Էµ� �� : %d\n", inputNum);
//
//	while (countNum <= inputNum)
//	{
//		printf("%d\n", countNum*3);
//		
//		countNum++;
//	}
//}

//����3 0�� �Է��Ҷ����� ������ ����ؼ� �Է¹ް� �ش� ������ ���� ��� 

//void main()
//{
//	int inputNum = 1;
//	int count = 0;
//	int resultNum = 0;
//	
//
//	while (inputNum!=0)
//	{
//		inputNum = 0;
//		printf("������ �Է��ϼ���: ");
//		scanf_s("%d", &inputNum);
//		
//		resultNum = resultNum + inputNum;
//	}
//
//	printf("��� ������ ��: %d\n", resultNum);
//}

//����4 ����ڷκ��� �Է� ���� ���ڿ� �ش��ϴ� ������ ��� / �������� 

//void main()
//{
//	int inputNum;
//	int count = 9;
//
//	printf("���� �Է�: ");
//	scanf_s("%d", &inputNum);
//
//	while (count != 0)
//	{
//		printf("%d x %d = %d\n", inputNum, count, inputNum * count);
//		count--;
//	}
//}

//����5 �Է¹��� ������ ����� ���
// ����1 - ��� ������ �Է¹����� ��� �� �ش� �� ��ŭ �Է� 
// ����2 - ��� ���� �Ҽ��� ���ϱ��� ����Ͽ� ���

void main()
{
	int inputNum = 0;

	int count, count2;

	double resultNum;

	printf("��� ���� �Է�? : ");
	scanf_s("%d", &count);
	
	count2 = count;

	while (count != 0)
	{
		printf("�� �Է�: ");
		scanf_s("%d", &inputNum);

		inputNum += inputNum;
		count--;
	}

	printf("����: %d\n", inputNum);

	resultNum = (double)inputNum / count2;
	printf("��� ��: %lf\n", resultNum);
}