#include <stdio.h>

// ����1: ������ ������ ���ڷ� ���޹ް�  ����ū���� ���� �������� ��ȯ�ϴ� �Լ� ���� 
//int num1, num2, num3;
//
//int big, middle, small;
//
//void NumberCompare(int num1, int num2, int num3);
//
//void main()
//{
//	printf("���� 3���� �Է�: ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	NumberCompare(num1, num2, num3);
//
//	printf("���� ū�� : %d\n", big);
//	printf("�߰� ��: %d\n", middle);
//	printf("���� ���� ��: %d\n", small);
//	//TODO: return ���� ���� �� ��� 
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


//����2 ���� �µ��� ȭ���� ��ȯ , ȭ�� �µ��� ������ ��ȯ�ϴ� �Լ� 

double celsius, fahrenheit;

double CelToFah(double celsius);

double FahToCel(double fahrenheit);

int switchNumber;

void main()
{
	
	printf("��ȯ �� ���� ���� \n");
	printf("1. CelToFah  2. FahToCel  �Է�: ");
	scanf_s("%d", &switchNumber);

	switch (switchNumber)
	{
	case 1:
		printf("���� �Է�: ");
		scanf_s("%lf", &celsius);
		CelToFah(celsius);
		printf("ȭ��: %lf\n", fahrenheit);
		break;
	case 2:
		printf("ȭ�� �Է�: ");
		scanf_s("%lf", &fahrenheit);
		FahToCel(fahrenheit);
		printf("����: %lf\n", celsius);
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
