//����3 ���޵� ����ŭ �Ǻ���ġ ���� ��� �Լ� 

#include <stdio.h>

int inputNum;
int fs1 = 0, fs2 = 1, lastValue;

void FibonacciSequence(int inputNum);


void main()
{
	printf("������ �Է����ּ���: ");
	scanf_s("%d", &inputNum);

	FibonacciSequence(inputNum);

}

void FibonacciSequence(int inputNum)
{
	for (int i = 0; i < inputNum; i++)
	{
		if (i <= 1)
		{
			printf("%d, ", i);
		}
		else if (i > 1)
		{
			lastValue = fs1 + fs2;
			printf("%d, ", lastValue);
			fs1 = fs2;
			fs2 = lastValue;
		}
	}//for(inputNum)
}