#include<stdio.h> 
#include <math.h>
#define pi 3.1415926
#define g 9.8

/*顺序结构练习题，函数Tn对应第n题*/
int T1()
{
	double C, F;
	scanf_s("%lf", &F);
	C = 5 / 9.0 * (F - 32);
	printf("C=%6.2f\n", C);
	return 0;
}

int T2()
{
	char C = 0;
	scanf_s("%c", &C);
	if (C > 64 && C < 91)
	{
		printf("%c%c", C + 32, C + 33);
	}
	else
	{
		printf("未输入大写字母");
	}
	return 0;
}


int T3()
{
	int a, c1, c2, c3, c4, c5, c6, c7, c8 = 0;
	scanf_s("%d", &a);
	c1 = a % 2;
	a /= 2;
	c2 = a % 2;
	a /= 2;
	c3 = a % 2;
	a /= 2;
	c4 = a % 2;
	a /= 2;
	c5 = a % 2;
	a /= 2;
	c6 = a % 2;
	a /= 2;
	c7 = a % 2;
	a /= 2;
	c8 = a % 2;
	a /= 2;
	printf("%d%d%d%d%d%d%d%d", c8, c7, c6, c5, c4, c3, c2, c1);
	return 0;
}


int T4()
{
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d", a * b);
	return 0;
}

int T5()
{
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printf("%.2f", (a + b + c) / 3.0);
	return 0;
}



int T6() {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	printf("%d", a + b + c);
	return 0;
}

int T7()
{
	float r = 0;
	//const float pi=3.1415926; 
	// pi=1;  
	scanf_s("%f",&r);
	printf("%.2f %.2f\n", 4 * r * r * pi, r * r * r * pi * 4 / 3);
	return 0;
}


int T8()
{
	double a, b, c, s, p;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	p = (a + b + c) / 2;  s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%.2f\n", s);
	return 0;
}

int T9()
{
	double a, b, c, x1, x2;
	scanf_s("%lf %lf %lf", &a, &b, &c);
	x1 = ((-1.0) * b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = ((-1.0) * b - sqrt(b * b - 4 * a * c)) / (2 * a);
	printf("%.2f %.2f\n", x1, x2);
	return 0;
}

int T10()
{
	double s, v0, t, a;
	scanf_s("%lf %lf %lf", &v0, &a, &t);
	s = v0 * t + (a * t * t / 2.0);
	printf("%.2f\n", s);  return 0;
}

int T11()
{
	float r = 0;
	// const float pi=3.1415926;
	// pi=1;
	scanf_s("%f",&r);
	printf("%.2f %.2f\n", 2 * r * pi, r * r * pi);
	return 0;
}

int T12()
{
	float p, w, s, d, f;
	scanf_s("%f %f %f %f", &p, &w, &s, &d);
	f = p * w * s * (1 - d);
	printf("%.3f\n", f);
	return 0;
}

int T13()
{
	float h, t;
	scanf_s("%f", &h);
	t = sqrt(2 * h / g);
	printf("%.2f\n", t);
	return 0;
}

int T14()
{
	int total, n = 0;
	scanf_s("%d", &total);
	n = total / 100;
	total = total % 100;
	printf("%d\n", n);
	n = total / 50;
	total = total % 50;
	printf("%d\n", n);
	n = total / 20;
	total = total % 20;
	printf("%d\n", n);
	n = total / 10;
	total = total % 10;
	printf("%d\n", n);
	n = total / 5;
	total = total % 5;
	printf("%d\n", n);
	n = total / 1;
	printf("%d\n", n);
	return 0;
}

int main()
{

	return 0;
}
