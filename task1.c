#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846
#define c 0.4
int one() 
{
	setlocale(LC_ALL, "RUS");
	double gr;
	double rad;
	double ans;
	printf("Введите угол в градусах:");
	scanf("%lf", &gr);

	rad = gr * M_PI / 180.0;
	ans = sin(rad);
	printf("sin(%.01f)=%.6f\n", gr, ans);

	return 0;
}

int two()
{
	setlocale(LC_ALL, "RUS");
	double a,b,x,y;
	
	printf("Введите значение x:");
	scanf("%lf", &x);

	a = log10(x);
	b = pow(a,2) + sqrt(c * x);
	y = exp(2 * x) + pow(9.7, b);
	printf("\n -----Контрольный пример-----\n");
	printf("\n *         x=%.1f            *\n", x);
	printf("\n *         y=%.2f        *\n", y);
	printf("\n ----------------------------\n");
	return 0;
}

int main() {
	/*one();*/
	two();
}