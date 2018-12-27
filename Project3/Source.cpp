#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <thread>
#include <chrono>





void task1() {
	int x;
	printf("введите конечное число диапазона:");
	scanf_s("%d", &x);
	for (size_t i = 0; i <= x; i++) {
		printf("числа от 0 до указанного: %d\n", i);
	}
}

void task2() {
	int x, y;
	printf("введите начальное число диапазона:");
	scanf_s("%d", &x);
	printf("введите конечное число диапазона:");
	scanf_s("%d", &y);
	for (size_t i = x; i <= y; i++) {
		if (i % 2 == 0)
			printf("четное число: %d\n", i);

		if (i % 2 != 0)
			printf("не четное число: %d\n", i);

		if (i % 7 == 0)
			printf("число кратное 7: %d\n", i);


	}
}

void task3() {
	int x = 0;
	printf("введите число:");
	scanf_s("%d", &x);

	if (x % x == 0 && x / 1 == 0) {
		printf("данное число €вл€етс€ простым\n");
	}
	else printf("число €вно не простое\n");

}

void task4() {
	int x, y, sum = 0;
	printf("введите начальное число диапазона:");
	scanf_s("%d", &x);
	printf("введите конечное число диапазона:");
	scanf_s("%d", &y);
	for (size_t i = x; i <= y; i++) {
		sum += i;
	}
	printf("сумма всех чисел указанного диапазона: %d\n", sum);
}

void task5() {
	int x = 0, sum = 0;
	do {
		printf("программа будет складывать введенные вами числа до тех пор\n пока вы не ввидете 0, введите чило:");
		scanf_s("%d", &x);
		sum = sum + x;
	} while (x != 0);
	printf("сумма введенных вами чисел:%d\n", sum);
}

void task6() {
	int y, x = 0, count = 0;
	y = 2 + rand() % 60;
	printf("хм хм € загадал число попробуй его угадать, введи число:");
	scanf_s("%d", &x);
	do {
		count++;
		if (x < y) {
			printf("загаданное число больше чем то что ты ввел =)\n");
			scanf_s("%d", &x);
		}
		else if (x > y) {
			printf("загаданное число меньше чем то что ты ввел =)\n");
			scanf_s("%d", &x);
		}
		else if (x == y) printf("ура ты победил! молодец!");
	} while (x != y && x != 0);
	if (count > 10) {
		printf("прошло давольно много времени\n");
	}
	else printf("вы справились с заданием довольно быстро\n");
	printf("число ваших попыток: %d\n", count);
}

void task7() {
	int x = 0, y = 0;

	do {
		printf("выберите валюту 1-доллар 2-рубль 3-евро:");
		scanf_s("%d", &y);
		printf("введите сумму: ");
		scanf_s("%d", &x);
		switch (y) {
		case 1:
		{x = x * 365;
		printf("сумма в тенге %d\n", x); }
		break;
		case 2:
		{x = x * 5;
		printf("сумма в тенге %d\n", x); }
		break;
		case 3:
		{x = x * 420;
		printf("сумма в тенге %d\n", x); }
		break;
		default:
			break;
		}
		printf("хотите продолжить? 1/0:");
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
		printf("выберите символ: 1-*. 2-/:");
		scanf_s("%d", &x);
		
			if (x < 2) {
				for (size_t i = 1; i <= 10; i++)
				printf("*");
			}
			else if (x > 1) {
				for (size_t i = 1; i <= 10; i++)
					
				printf("/");
			}
			printf("хотите продолжить? 1/0:");
			scanf_s("%d", &x);
		
	} while (x != 0);
}

void task10() {
	float x, y, z;
	printf("ввдеите число:\n");
	scanf_s("%f", &x);
	printf("ввдеите степень числа:\n");
	scanf_s("%f", &y);
	z = 1 / (pow(x, y));
	printf("%f", z);
}

void task11() {
	
		setlocale(0, "");
		int f = 1;
		int x;
		printf( "¬ведите целое число дл€ вычислени€ факториала\n");
		scanf_s("%d", &x);
		for (size_t i = 1; i <= x; i++)
		{
			f *= i;
			printf("‘акториал числа равен - %d\n", f);
		}
		printf("‘акториал числа равен - %d\n", f);
		
	
}

void task12() {
	int kub1 = 0, kub2 = 0,sum1 = 0, sum2 = 0, x = 0;
		do {
			printf("предлагаю поиграть в кубики +__+ игра проста, по очереди кидаем пару кубиков\nу кого выподет больше тот и победил ты готов? 1/0\n");
			scanf_s("%d", &x);
			kub1 = 1 + rand() % 6;
			kub2 = 1 + rand() % 6;
			printf("это мои кубики\n 1 - кубик %d\n2 - кубик %d\n", kub1, kub2);
			sum1 = kub1 + kub2;
			printf("общее количество очков %d\n", sum1);
			kub1 = 1 + rand() % 6;
			kub2 = 1 + rand() % 6;
			printf("а это твои кубики\n 1 - кубик %d\n2 - кубик %d\n", kub1, kub2);
			sum2 = kub1 + kub2;
			printf("общее количество очков %d\n", sum2);
			if (sum1 > sum2) printf("прости но ты проиграл\n");
			else if (sum1 < sum2) printf("поздравл€ю ты победил\n");
			printf("хотите продолжить? 1/0:");
			scanf_s("%d", &x);
		} while (x != 0);

}

void task13() {
	int x, y, z;
	printf("введите начальное число диапазона:");
	scanf_s("%d", &x);
	printf("введите конечное число диапазона:");
	scanf_s("%d", &y);
	printf("введите число:");
	scanf_s("%d", &z);
	for (size_t i = x; i <= y; i++) {
		if (z < x || z > y) {
			printf("число не поподает в диапазон\n");
		}
		else  printf("число попадает в диапазон\n");
		}
}

int main() {
	setlocale(LC_ALL, "");
	int task;
	do {
		printf("ввеедите номер задани€:");
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
		printf("хотите продолжить? 1/0:");
		scanf_s("%d", &task);
	} while (task != 0);
	system("pause");
}