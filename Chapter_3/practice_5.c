/* �����±����ϰ������ */
/* ��ʾ�û��������䣬Ȼ�������Ӧ������ */
/* һ���� 3.156e7�� */
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
