#include <stdio.h>

void main()
{
	double korean, math, english;

	double actResult;

	int intResult1, intResult2;

	printf("3������ ����(�Ǽ�) �Է�: ");

	scanf_s("%lf %lf %lf", &korean, &math, &english);

	intResult1 = (int)korean + (int)math + (int)english;
	printf("���� �հ�: %d\n", intResult1);

	actResult = (korean + math + english) / 3;
	printf("�Ǽ� ���: %lf\n", actResult);

	intResult2 = (int)actResult;

	printf("���� ���: %d\n", intResult2);
}