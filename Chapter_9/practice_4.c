/* �ھ��±����ϰ������ */
#include <stdio.h>
double taver(double first, double second);
int main(void)
{
	double first, second, average;
	
	printf("Please enter two double type number:");
	scanf("%lf %lf", &first, &second);
	average = taver(first,second);
	printf("The two number's harmonic mean is %f",average);
	
	return 0;
}

double taver(double first, double second)
{
	double average;
	
	first = 1.0 / first;
	second = 1.0 / second;
	average = first + second;
	average = 1 / average;
	
	return average;
}
