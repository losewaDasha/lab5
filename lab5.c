#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, t, x, y, z;

	printf("¬ведите x:");
	scanf("%lf", &x);
	printf("¬ведите y:");
	scanf("%lf", &y);
	printf("¬ведите z:");
	scanf("%lf", &z);

	a = 2 * cos(x - (M_PI / 6));
	b= 0.5+pow(sin(y), 2);
	c= 1+((pow(z, 2))/(3-((pow(z, 2))/5)));
	t = (a / b) * c; 
	printf("\n -----------–езультаты:----------\n");
	printf("\n *            x=%.2f            *\n", x);
	printf("\n *            y=%.2f        *\n", y);
	printf("\n *            z=%.3f        *\n", z);
	printf("\n *            t=%.6f        *\n", t);
	printf("\n -------------------------------\n");
	return 0;
}
