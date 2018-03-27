/* 第五章编程练习第九题 */
#include <stdio.h>
void Temperatures(double Fahr);
int main(void)
{
	double Fahren;
	
	printf("请输入一个开氏温度：");
	while(1 == scanf("%lf",&Fahren))
		Temperatures(Fahren);
	
	return 0;
}

void Temperatures(double Fahr)
{
	const double num = 5.0 / 9.0;
	double open, celsiu;
	
	celsiu = num * (Fahr -32.0);
	open = celsiu +273.16;
	printf("华氏温度为：%.2f\n",Fahr);
	printf("摄氏温度为: %.2f\n",celsiu);
	printf("开氏温度为: %.2f\n",open);
}
