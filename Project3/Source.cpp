#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <thread>
#include <chrono>





void task1() {
	int x;
	printf("������� �������� ����� ���������:");
	scanf_s("%d", &x);
	for (size_t i = 0; i <= x; i++) {
		printf("����� �� 0 �� ����������: %d\n", i);
	}
}

void task2() {
	int x, y;
	printf("������� ��������� ����� ���������:");
	scanf_s("%d", &x);
	printf("������� �������� ����� ���������:");
	scanf_s("%d", &y);
	for (size_t i = x; i <= y; i++) {
		if (i % 2 == 0)
			printf("������ �����: %d\n", i);

		if (i % 2 != 0)
			printf("�� ������ �����: %d\n", i);

		if (i % 7 == 0)
			printf("����� ������� 7: %d\n", i);


	}
}

void task3() {
	int x = 0;
	printf("������� �����:");
	scanf_s("%d", &x);

	if (x % x == 0 && x / 1 == 0) {
		printf("������ ����� �������� �������\n");
	}
	else printf("����� ���� �� �������\n");

}

void task4() {
	int x, y, sum = 0;
	printf("������� ��������� ����� ���������:");
	scanf_s("%d", &x);
	printf("������� �������� ����� ���������:");
	scanf_s("%d", &y);
	for (size_t i = x; i <= y; i++) {
		sum += i;
	}
	printf("����� ���� ����� ���������� ���������: %d\n", sum);
}

void task5() {
	int x = 0, sum = 0;
	do {
		printf("��������� ����� ���������� ��������� ���� ����� �� ��� ���\n ���� �� �� ������� 0, ������� ����:");
		scanf_s("%d", &x);
		sum = sum + x;
	} while (x != 0);
	printf("����� ��������� ���� �����:%d\n", sum);
}

void task6() {
	int y, x = 0, count = 0;
	y = 2 + rand() % 60;
	printf("�� �� � ������� ����� �������� ��� �������, ����� �����:");
	scanf_s("%d", &x);
	do {
		count++;
		if (x < y) {
			printf("���������� ����� ������ ��� �� ��� �� ���� =)\n");
			scanf_s("%d", &x);
		}
		else if (x > y) {
			printf("���������� ����� ������ ��� �� ��� �� ���� =)\n");
			scanf_s("%d", &x);
		}
		else if (x == y) printf("��� �� �������! �������!");
	} while (x != y && x != 0);
	if (count > 10) {
		printf("������ �������� ����� �������\n");
	}
	else printf("�� ���������� � �������� �������� ������\n");
	printf("����� ����� �������: %d\n", count);
}

void task7() {
	int x = 0, y = 0;

	do {
		printf("�������� ������ 1-������ 2-����� 3-����:");
		scanf_s("%d", &y);
		printf("������� �����: ");
		scanf_s("%d", &x);
		switch (y) {
		case 1:
		{x = x * 365;
		printf("����� � ����� %d\n", x); }
		break;
		case 2:
		{x = x * 5;
		printf("����� � ����� %d\n", x); }
		break;
		case 3:
		{x = x * 420;
		printf("����� � ����� %d\n", x); }
		break;
		default:
			break;
		}
		printf("������ ����������? 1/0:");
		scanf_s("%d", &x);
	} while (x != 0);
}

void task8() {
	int a, sum, n;
	n = 0; sum = 0;
	scanf_s("%d", &a);

	for (; a > 0; n++)
	{
		a /= 10;
		sum = sum + (a /= 10);
	}

	printf("%d\n", n);
	printf("%d\n", sum);
}

void task9() {
	int x;
	do {
		printf("�������� ������: 1-*. 2-/:");
		scanf_s("%d", &x);
		
			if (x < 2) {
				for (size_t i = 1; i <= 10; i++)
				printf("*");
			}
			else if (x > 1) {
				for (size_t i = 1; i <= 10; i++)
					
				printf("/");
			}
			printf("������ ����������? 1/0:");
			scanf_s("%d", &x);
		
	} while (x != 0);
}

void task10() {
	float x, y, z;
	printf("������� �����:\n");
	scanf_s("%f", &x);
	printf("������� ������� �����:\n");
	scanf_s("%f", &y);
	z = 1 / (pow(x, y));
	printf("%f", z);
}

void task11() {
	
		setlocale(0, "");
		int f = 1;
		int x;
		printf( "������� ����� ����� ��� ���������� ����������\n");
		scanf_s("%d", &x);
		for (size_t i = 1; i <= x; i++)
		{
			f *= i;
			printf("��������� ����� ����� - %d\n", f);
		}
		printf("��������� ����� ����� - %d\n", f);
		
	
}

void task12() {
	int kub1 = 0, kub2 = 0,sum1 = 0, sum2 = 0, x = 0;
		do {
			printf("��������� �������� � ������ +__+ ���� ������, �� ������� ������ ���� �������\n� ���� ������� ������ ��� � ������� �� �����? 1/0\n");
			scanf_s("%d", &x);
			kub1 = 1 + rand() % 6;
			kub2 = 1 + rand() % 6;
			printf("��� ��� ������\n 1 - ����� %d\n2 - ����� %d\n", kub1, kub2);
			sum1 = kub1 + kub2;
			printf("����� ���������� ����� %d\n", sum1);
			kub1 = 1 + rand() % 6;
			kub2 = 1 + rand() % 6;
			printf("� ��� ���� ������\n 1 - ����� %d\n2 - ����� %d\n", kub1, kub2);
			sum2 = kub1 + kub2;
			printf("����� ���������� ����� %d\n", sum2);
			if (sum1 > sum2) printf("������ �� �� ��������\n");
			else if (sum1 < sum2) printf("���������� �� �������\n");
			printf("������ ����������? 1/0:");
			scanf_s("%d", &x);
		} while (x != 0);

}

void task13() {
	int x, y, z;
	printf("������� ��������� ����� ���������:");
	scanf_s("%d", &x);
	printf("������� �������� ����� ���������:");
	scanf_s("%d", &y);
	printf("������� �����:");
	scanf_s("%d", &z);
	for (size_t i = x; i <= y; i++) {
		if (z < x || z > y) {
			printf("����� �� �������� � ��������\n");
		}
		else  printf("����� �������� � ��������\n");
		}
}

int main() {
	setlocale(LC_ALL, "");
	int task;
	do {
		printf("�������� ����� �������:");
		scanf_s("%d", &task);
		switch (task) {

		case 1:
		{task1(); }
		break;
		case 2:
		{task2(); }
		break;
		case 3:
		{task3(); }
		break;
		case 4:
		{task4(); }
		break;
		case 5:
		{task5(); }
		break;
		case 6:
		{task6(); }
		break;
		case 7:
		{task7(); }
		break;
		case 8:
		{task8(); }
		break;
		case 9:
		{task9(); }
		break;
		case 10:
		{task10(); }
		break;
		case 11:
		{task11(); }
		break;
		case 12:
		{task12(); }
		break;
		case 13:
		{task13(); }
		break;
		default:
			break;
		}
		printf("������ ����������? 1/0:");
		scanf_s("%d", &task);
	} while (task != 0);
	system("pause");
}