#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int tsk1(){
	char c;
	int i;
	float f;
	double d;

	puts("Тип char");
	scanf("%c", &c);
	puts("Тип int");
	scanf("%d", &i);
	puts("Тип float");
	scanf("%g", &f);
	puts("Тип double");
	scanf("%e", &d);
	printf("Введены типы\nchar \'%c\'\nint %d\nfloat %f\ndouble %e\n", c, i, f, d);

	//задание 1а
	float a;

	puts("\nВведите дробное число ");
	scanf("%f", &a);
	printf("Целая часть %d\n", (int)a);
	printf("Дробная часть %f\n", a - (int)a);

	//задание 1б
	char b;

	printf("\nВведите символ\n");
	scanf(" %c", &b);
	printf("Код в десятичной системе %d\nВ шестнадцатиричной %x\n", b, b);

	//задание 1в
	int i_i;
	printf("\nВведите целое число: ");
	scanf("%d", &i_i);
	printf("1 / 0 = %.5f\n", 1.0/i_i);
	return 0;
}

int tsk2() {
	int a = 11, b = 3;
	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;

	printf("\nВывод значений x, y, z\nx(int) %d\ny(float) %f\nz(double) %lf", x, y, z);

	printf("\nВывод значений с явным преобразованием типа\n");
	printf("(float)a/b = %f\n", (float)a / b);
	printf("(double)a/b = %lf\n", (double)a / b);

	printf("Эксперимент со скобками\n");
	printf("(float)a/b = %f (приведение a до деления)\n", (float)a / b);
	printf("(float)(a/b) = %f (приведение после деления)\n", (float)(a / b));
	printf("(double)a/b = %lf (приведение a до деления)\n", (double)a / b);
	printf("(double)(a/b) = %lf (приведение после деления)\n", (double)(a / b));

	return 0;
}

int tsk3() {
	int h;
	int last, middle, first;
	int sum, reversed;

	printf("\nВведите целое трёхзначное число: ");
	scanf("%d", &h);
	last = h % 10; //последняя цифра
	middle = (h / 10) % 10; // средняя цифра
	first = h / 100; //первая цифра
	sum = first + middle + last;
	reversed = last * 100 + middle * 10 + first;

	printf("Число: %d\nПоследняя цифра: %d\n Первая цифра: %d\nСумма цифр: %d\nЧисло наоборот: %d\n",h, last, first, sum, reversed);

	return 0;
}

int hmw4() {
	int A, B;
	int generation;
	printf("\nВведите сумму последней операции A: ");
	scanf("%d", &A);
	printf("Введите сумму предпоследней операции B: ");
	scanf("%d", &B);
	generation = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
	printf("Результат:\n");
	printf("A = %d (%s)\n", A, (A % 2 == 0) ? "чётная" : "нечётная");
	printf("B = %d (%s)\n", B, (B % 2 == 0) ? "чётная" : "нечётная");

	if (generation)
		printf("Секретный код сгенерирован\n");
	else
		printf("Секретный код не сгенерирован\n");

	return 0;
}


int main() {
	setlocale(LC_CTYPE, "rus");
	tsk1();
	tsk2();
	tsk3();
	hmw4();
	return 0;
}