/* �����±����ϰ��ʮ���� */
#include <stdio.h>
int main(void)
{
	double Daph = 100, Deir = 100;
	int i = 1;
	
	Daph = Daph+100 *0.1;
	Deir = Deir * (1 + 0.05);
	while(Deir < Daph)
	{
		Daph = Daph+100 *0.1;
		Deir = Deir * (1 + 0.05);
		i++;
	}
	printf("%d ��Deirdre��Ͷ�ʳ���Daphne,Ͷ�ʽ��Ϊ��Deirdre��%f,Daphne:%f", i, Deir, Daph);
	
	return 0;
} 
