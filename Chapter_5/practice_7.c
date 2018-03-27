/* 第五章编程练习第七题 */
#include <stdio.h>
void cubic(double numb);
int main(void)
{
	double number;
	
	printf("Please enter a double number:");
	scanf("%lf",&number);
	cubic(number);
	
	return 0;
}

void cubic(double numb)
{
	double numbt;
	
	numbt = numb * numb * numb;
	printf("The %f's cubic is %f\n", numb, numbt);
}
