/* 第三章编程练习第六题 */
/* 输入水的夸脱数，显示水分子的数量 */
#include <stdio.h>
int main(void)
{
	float kuot;
	double number;
	
	printf("Please enter the kuatuo of water: ");
	scanf("%f",&kuot);
	printf("The water number is:%f", kuot * 950 / 3.0e-23);
	
	return 0;
}
