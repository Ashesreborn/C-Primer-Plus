/* 第九章编程练习第六题 */
#include <stdio.h>
void test(double * first, double * second, double * third);
int main(void)
{
	double first, second, third;
	
	printf("Please enter three variable of type double:");
	scanf("%lf %lf %lf:", &first, &second, &third);
	printf("You enter number is %.2f, %.2f, %.2f\n",first, second, third);
	test(&first, &second, &third);
	printf("You end number is %.2f, %.2f, %.2f\n",first, second, third);
	
	return 0;
}

void test(double * first, double * second, double * third)
{
	double temp;
	
	if(*first > *second)
	{
		temp = *first;
		*first = *second;
		*second = temp ;
	}
	if(*first > *third)
	{
		temp = *first;
		*first = *third;
		*third = temp;
	}
    if(*second > *third)
	{
		temp = *second;
		*second = *third;
		*third = temp;
	}
}
