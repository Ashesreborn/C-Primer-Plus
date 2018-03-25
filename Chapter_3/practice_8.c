/* 第三章编程练习第八题 */
/* 提示用户输入杯数，输出品脱，盎司，汤勺，茶勺 */
#include <stdio.h>
int main(void)
{
	float numberb;
	printf("Please enter you number(beishu):");
	scanf("%f",&numberb);
	printf("%f 杯是 %f 品脱.\n", numberb, numberb/2);
	printf("%f 杯是 %f 盎司.\n", numberb, numberb*8);
	printf("%f 杯是 %f 汤勺.\n", numberb,numberb*8*2);
	printf("%f 杯是 %f 茶勺.\n",numberb,numberb*8*2*3);
	
	return 0;
}
