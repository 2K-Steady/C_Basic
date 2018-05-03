#include <stdio.h>

//문제 1:총 5개의 정수 입력, 수의 합을 출력
//정수는 반드시 1 이상이어야 하며 1 미만의 수가 입력되는 경우 재입력 
void main()
{
	int inputNum = 1;
	int resultNum=0;

	int count = 0;

	while(count<5)
	{
		count++;
		printf("정수를 입력: ");
		scanf_s("%d", &inputNum);
		while (inputNum <= 0)
		{
			printf("0이상의 숫자를 입력하세요\n");
			count--;
			break;
		}

		resultNum += inputNum;
		printf("1이상의 정수 입력횟수: %d\n", count);
	}

	printf("총합: %d\n", resultNum);
}

//문제2 while 중첩 이용 아래와 같이 출력
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
//	printf("함수 종료\n");
//}