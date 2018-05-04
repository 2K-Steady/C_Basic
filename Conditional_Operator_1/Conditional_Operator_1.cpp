#include <stdio.h>

//문제1  7과 9의 배수 출력 겹치는 숫자는 한번만 노출되도록 한다.
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

//문제2 두개의 정수를 입력, 두수의 차를 출력
//무조건 큰수에서 작은수를 빼야함.

//void main()
//{
//	int inputNum1, inputNum2;
//
//	printf("2개의 정수 입력: ");
//	scanf_s("%d %d", &inputNum1, &inputNum2);
//
//	while (inputNum1 == inputNum2)
//	{
//		printf("정수를 다시 입력해주세요\n");
//		printf("2개의 정수 입력: ");
//		scanf_s("%d %d", &inputNum1, &inputNum2);
//	}
//
//	if (inputNum1 > inputNum2)
//	{
//		printf("두 정수의 차: %d\n", inputNum1 - inputNum2);
//	}
//	else if (inputNum2 > inputNum1)
//	{
//		printf("두 정수의 차: %d\n", inputNum2 - inputNum1);
//	}
//}

//문제3 학생의 전체 평균점수에 대한 학점 출력
//평균 90 이상 A  , 80이상 B , 70이상 C , 50이상 D , 50미만 F
//국어 영어 수학점수 
//
//void main()
//{
//	int korean, english, math;
//	int resultScore = 0;
//
//	printf("점수 3개 입력: ");
//	scanf_s("%d %d %d", &korean, &english, &math);
//
//	resultScore = (korean + english + math) / 3;
//
//	printf("평균점수: %d\n", resultScore);
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