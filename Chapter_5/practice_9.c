/* �����±����ϰ�ھ��� */
#include <stdio.h>
void Temperatures(double Fahr);
int main(void)
{
	double Fahren;
	
	printf("������һ�������¶ȣ�");
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
	printf("�����¶�Ϊ��%.2f\n",Fahr);
	printf("�����¶�Ϊ: %.2f\n",celsiu);
	printf("�����¶�Ϊ: %.2f\n",open);
}
