/* 第三章编程练习第四题 */
/* 提示用户输入年龄，然后输出对应的秒数 */
/* 一年有 3.156e7秒 */
#include <stdio.h>
int main(void)
{
	int ages;
	double second;
	
	printf("Please enter your ages:");
	scanf("%d", &ages);
	second = ages * 3.156e7;
	printf("%d ages has %lf seconds", ages, second);
	
	return 0;
}
