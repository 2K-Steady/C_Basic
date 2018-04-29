#include <stdio.h>

void main()
{
	double num1, num2;

	int result1, result2;

	printf("2개의 실수 (double) 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("입력된 실수: %f, %f\n", num1, num2);

	result1 = num1 * num2; // 결과 값이 int 형으로 캐스팅됨 

	printf("두 실수를 곱하여 정수로 변환한 값: %d\n", result1);

	result2 = (int)num1 * (int)num2; //각 실수가 int형으로 캐스팅 된 후 곱하게됨 (위 경우 보다 손실이 커짐)
	printf("두 실수를 정수로 변환 후 곱한 값: %d\n", result2);
}