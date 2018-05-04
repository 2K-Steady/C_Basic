#include <stdio.h>

//문제1 2개의 정수를 입력받아서 해당 정수를 포함,
//2개의 정수 사이에 존재하는 모든 정수들의 합을 구하기
//void main()
//{
//	int inputNum1, inputNum2;
//	int resultNum=0;
//
//	printf("2개의 정수 입력: ");
//	scanf_s("%d %d", &inputNum1, &inputNum2);
//
//	for (inputNum1; inputNum1 <= inputNum2; inputNum1++)
//	{
//		resultNum += inputNum1;
//		printf("총합%d += 입력정수%d\n", resultNum, inputNum1);
//	}
//
//	printf("정수의 합: %d\n", resultNum);
//}


//문제2 팩토리얼 계산 (n!)

//void main()
//{
//	int inputNum;
//	int resultNum=0;
//	int count = 0;
//
//	printf("정수 입력: ");
//	scanf_s("%d", &inputNum);
//	
//	count = inputNum;
//	
//	for (int i = count-1; i >= 1; i--)
//	{
//		inputNum *= i;
//		printf("%d x %d\n", i, count);
//
//	}
//
//	printf("총합: %d", inputNum);
//}