#include <stdio.h>

//문제 1 유저로부터 양의 정수를 하나 입력 받아, 수만큼 "Hello World" 출력

//void main()
//{
//	int inputNum1;
//	int countNum1 = 0;
//
//	printf("임의의 수 입력: ");
//	scanf_s("%d", &inputNum1);
//
//	printf("\n입력된 수: %d\n", inputNum1);
//
//	while (countNum1 < inputNum1)
//	{
//		printf("Hello World\n");
//		countNum1++;
//	}
//}

//문제 2 유저로부터 양의 정수 입력, 해당 수만큼 3의 배수 출력 ex) 5 입력시 3,6,9,12,15가 출력되도록

//void main()
//{
//	int inputNum;
//	int countNum = 1;
//
//	printf("양의 정수 입력: ");
//	scanf_s("%d", &inputNum);
//
//	printf("입력된 수 : %d\n", inputNum);
//
//	while (countNum <= inputNum)
//	{
//		printf("%d\n", countNum*3);
//		
//		countNum++;
//	}
//}

//문제3 0을 입력할때까지 정수를 계속해서 입력받고 해당 정수의 합을 출력 

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
//		printf("정수를 입력하세요: ");
//		scanf_s("%d", &inputNum);
//		
//		resultNum = resultNum + inputNum;
//	}
//
//	printf("모든 정수의 합: %d\n", resultNum);
//}

//문제4 사용자로부터 입력 받은 숫자에 해당하는 구구단 출력 / 역순으로 

//void main()
//{
//	int inputNum;
//	int count = 9;
//
//	printf("숫자 입력: ");
//	scanf_s("%d", &inputNum);
//
//	while (count != 0)
//	{
//		printf("%d x %d = %d\n", inputNum, count, inputNum * count);
//		count--;
//	}
//}

//문제5 입력받은 정수의 평균을 출력
// 조건1 - 몇개의 정수를 입력받을지 물어본 후 해당 수 만큼 입력 
// 조건2 - 평균 값은 소수점 이하까지 계산하여 출력

void main()
{
	int inputNum = 0;

	int count, count2;

	double resultNum;

	printf("몇개의 수를 입력? : ");
	scanf_s("%d", &count);
	
	count2 = count;

	while (count != 0)
	{
		printf("수 입력: ");
		scanf_s("%d", &inputNum);

		inputNum += inputNum;
		count--;
	}

	printf("총합: %d\n", inputNum);

	resultNum = (double)inputNum / count2;
	printf("평균 값: %lf\n", resultNum);
}