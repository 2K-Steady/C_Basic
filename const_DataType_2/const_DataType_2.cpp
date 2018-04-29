#include <stdio.h>

void main()
{
	int num1, num2, num3, num4;

	double actNum1, actNum2;

	

	printf("정수 2개 입력: ");

	scanf_s("%d %d", &num1, &num2);

	printf("입력된 정수: %d, %d\n", num1, num2);

	num3 = num1 / num2;

	printf("첫번째 수를 두번째 수로 나눈 몫: %d\n", num3);

	actNum1 = (double)num1;
	printf("첫번째 수를 실수로 변환: %.2f\n", actNum1);

	actNum2 = actNum1 / num2;
	printf("두번째수로 첫번째 수로 나눈 값: %.2f\n", actNum2);
	
	
}