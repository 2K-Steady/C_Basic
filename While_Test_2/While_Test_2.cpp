#include <stdio.h>

//���� 1:�� 5���� ���� �Է�, ���� ���� ���
//������ �ݵ�� 1 �̻��̾�� �ϸ� 1 �̸��� ���� �ԷµǴ� ��� ���Է� 
void main()
{
	int inputNum = 1;
	int resultNum=0;

	int count = 0;

	while(count<5)
	{
		count++;
		printf("������ �Է�: ");
		scanf_s("%d", &inputNum);
		while (inputNum <= 0)
		{
			printf("0�̻��� ���ڸ� �Է��ϼ���\n");
			count--;
			break;
		}

		resultNum += inputNum;
		printf("1�̻��� ���� �Է�Ƚ��: %d\n", count);
	}

	printf("����: %d\n", resultNum);
}

//����2 while ��ø �̿� �Ʒ��� ���� ���
/*
		0
		0*
		00*
		000*
		0000*
*/

//void main()
//{
//	int circle = 0;
//	int star = 0;
//
//	while (star < 5)
//	{
//		while (circle < star)
//		{
//			printf("O");
//			circle++;
//		}
//		printf("*\n");
//		circle = 0;
//		star++;
//	}
//
//	printf("�Լ� ����\n");
//}