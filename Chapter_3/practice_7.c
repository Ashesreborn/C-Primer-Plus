/* 第三章编程练习第七题 */
/* 提示用户以英寸输入身高后以厘米为单位显示 */
#include <stdio.h>
int main(void)
{
	float inches;
	
	printf("Please enter your hight(inches):");
	scanf("%f",&inches);
	printf("%f inches is %f cm", inches, inches * 2.54);
	
	return 0;
} 
