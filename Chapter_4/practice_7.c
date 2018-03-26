/* 第四章编程练习第七题 */
#include <stdio.h>
#include <float.h>
int main(void)
{
	double numo = 1.0 / 3.0;
	float numt = 1.0 / 3.0;
	
	printf("double类型的变量为: %f ,float类型的变量为: %f \n",numo,numt);
	printf("double类型的变量为：%.12f ,float类型的变量为: %.12f \n", numo, numt);
	printf("double类型的变量为：%.16f ,float类型的变量为: %.16f \n", numo, numt);
	
	printf("The FLT_DIG is :%d\n",FLT_DIG);
	printf("The FLT_DIG is :%d",DBL_DIG);
	
	return 0;
}
