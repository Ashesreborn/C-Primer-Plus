/* �����±����ϰ������ */
#include <stdio.h>
#include <float.h>
int main(void)
{
	double numo = 1.0 / 3.0;
	float numt = 1.0 / 3.0;
	
	printf("double���͵ı���Ϊ: %f ,float���͵ı���Ϊ: %f \n",numo,numt);
	printf("double���͵ı���Ϊ��%.12f ,float���͵ı���Ϊ: %.12f \n", numo, numt);
	printf("double���͵ı���Ϊ��%.16f ,float���͵ı���Ϊ: %.16f \n", numo, numt);
	
	printf("The FLT_DIG is :%d\n",FLT_DIG);
	printf("The FLT_DIG is :%d",DBL_DIG);
	
	return 0;
}
