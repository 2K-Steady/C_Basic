#include <stdio.h>

void main()
{
	double korean, math, english;

	double actResult;

	int intResult1, intResult2;

	printf("3과목의 점수(실수) 입력: ");

	scanf_s("%lf %lf %lf", &korean, &math, &english);

	intResult1 = (int)korean + (int)math + (int)english;
	printf("정수 합계: %d\n", intResult1);

	actResult = (korean + math + english) / 3;
	printf("실수 평균: %lf\n", actResult);

	intResult2 = (int)actResult;

	printf("정수 평균: %d\n", intResult2);
}