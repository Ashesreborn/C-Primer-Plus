/* 第九章编程练习第一题 */
#include <stdio.h>
double min(double fir, double sec);
int main(void)
{
	double fir, sec;
	printf("Please enter two number:");
	scanf("%lf %lf", &fir, &sec);
	fir = min(fir,sec);
	printf("the small number is %lf",fir);
} 

double min(double fir, double sec)
{
	return fir < sec ? fir : sec;
}
