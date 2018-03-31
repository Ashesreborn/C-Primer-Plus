/* 第九章编程练习第五题 */
#include <stdio.h>
void larger_of(double * x,double * y);
int main(void)
{
	double x, y;
	
	printf("Please enter two variables of type double:");
	scanf("%lf %lf", &x, &y);
	printf("The variables's value is %f and %f\n", x, y);
	larger_of(&x, &y);
	printf("The variables's value is %f and %f\n", x, y);
	
	return 0;
}

void larger_of(double * x,double * y)
{
	if(*x > *y)
		*y = *x;
	else
		*x = *y;
}
