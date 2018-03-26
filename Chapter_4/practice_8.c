/* 第四章编程练习第八题 */
#include <stdio.h>
#define GAL 3.785
#define MILES 1.1609
int main(void)
{
	float mile,numb,euro,amer;
	
	printf("Please enter your mileage and oil number: ");
	scanf("%f %f",&mile,&numb);
	printf("消耗每加仑汽油行驶%.1f公里。\n",mile/numb);
	euro = (mile * MILES )/( numb * GAL);
	amer = (numb * GAL) / (mile * MILES * 100);
	printf("欧洲消耗表示法：%f",euro);
	printf("美国消耗表示法: %f",amer);
	
	return 0;
}
