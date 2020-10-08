#include<stdio.h>
void swap(float*, float*, float*);
int main()
{
	float a, b, c;
	scanf_s("%f %f %f", &a, &b, &c);
	swap(&a, &b, &c);
	printf_s("%f %f %f", a, b, c);
	return 0;
}
void swap(float*x, float*y, float*z)
{
	float a = *x , b = *z;
	*z = *y;
	*y = a;
	*x = b;
	return;
}

