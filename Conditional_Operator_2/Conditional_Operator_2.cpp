#include <stdio.h>

//����1 - ������ ¦���ܸ� ���
// 2���� ��� 2x2���� 4���� ��� 4x4���� 
// continue�� break�� Ȱ�� 
//
//void main()
//{
//	for (int i = 2; i < 10; i++)
//	{
//		for (int j = 1; j < 10; j++)
//		{
//			if (i % 2 != 0)
//				continue;
//			else if (i >= j)
//			{
//				printf("%d x %d =%d\n", i, j, i*j);
//			}
//		}
//	}
//}

//����2 - AZ + ZA = 99�� �����ϴ� ���α׷� �ۼ�

void main()
{
	int a, z;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i + j == 9)
			{
				printf("%d, %d\n", i, j);
			}
		}
		
	}

}