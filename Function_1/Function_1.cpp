#include <stdio.h>

// 문제1: 세개의 정수를 인자로 전달받고  가장큰수와 가장 작은수를 반환하는 함수 정의 
//int num1, num2, num3;
//
//int big, middle, small;
//
//void NumberCompare(int num1, int num2, int num3);
//
//void main()
//{
//	printf("정수 3개를 입력: ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	NumberCompare(num1, num2, num3);
//
//	printf("가장 큰수 : %d\n", big);
//	printf("중간 수: %d\n", middle);
//	printf("가장 작은 수: %d\n", small);
//	//TODO: return 값을 받은 후 출력 
//	
//	
//}
//
//void NumberCompare(int num1, int num2, int num3)
//{	
//	if (num1 > num2 && num1 > num3)
//	{
//		big = num1;
//		if (num2 > 3)
//		{
//			middle = num2;
//			small = num3;
//		}
//		else if (num2 < 3)
//		{
//			middle = num3;
//			small = num2;
//		}
//	}
//	else if (num2 > num1 && num2 > num3)
//	{
//		big = num2;
//		if (num1 > num3)
//		{
//			middle = num1;
//			small = num3;
//		}
//		else if (num1 < num3)
//		{
//			middle = num3;
//			small = num1;
//		}
//	}
//	else if (num3 > num1 && num3 > num2)
//	{
//		big = num3;
//		if (num1 > num2)
//		{
//			middle = num1;
//			small = num2;
//		}
//		else if (num1 < num2)
//		{
//			middle = num2;
//			small = num1;
//		}
//
//	}
//	
//}


//문제2 섭씨 온도를 화씨로 반환 , 화씨 온도를 섭씨로 반환하는 함수 

double celsius, fahrenheit;

double CelToFah(double celsius);

double FahToCel(double fahrenheit);

int switchNumber;

void main()
{
	
	printf("변환 할 공식 선택 \n");
	printf("1. CelToFah  2. FahToCel  입력: ");
	scanf_s("%d", &switchNumber);

	switch (switchNumber)
	{
	case 1:
		printf("섭씨 입력: ");
		scanf_s("%lf", &celsius);
		CelToFah(celsius);
		printf("화씨: %lf\n", fahrenheit);
		break;
	case 2:
		printf("화씨 입력: ");
		scanf_s("%lf", &fahrenheit);
		FahToCel(fahrenheit);
		printf("섭씨: %lf\n", celsius);
		break;
	}
}

double CelToFah(double celsius)
{
	fahrenheit = (1.8 * celsius) + 32;
	return fahrenheit;
}

double FahToCel(double fahrenheit)
{
	celsius = (fahrenheit - 32) / 1.8;
	return celsius;
}
