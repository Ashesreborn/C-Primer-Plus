/* �����±����ϰ�ھ��� */
#include <stdio.h>
void calcul(double num1,double num2);
int main(void)
{
	double num1, num2;
	
	printf("Please enter two number:");
	while(2 == scanf("%lf %lf",&num1, &num2))
	{
		calcul(num1,num2);
	}
	return 0;
} 

void calcul(double num1, double num2)
{
	printf("����֮����������˻��Ľ��Ϊ��%f",(num1 - num2)/(num1 * num2));
}


