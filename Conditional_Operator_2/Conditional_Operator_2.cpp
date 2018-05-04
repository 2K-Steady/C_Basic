#include <stdio.h>

//문제1 - 구구단 짝수단만 출력
// 2단의 경우 2x2까지 4단의 경우 4x4까지 
// continue랑 break를 활용 
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

//문제2 - AZ + ZA = 99를 충족하는 프로그램 작성

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