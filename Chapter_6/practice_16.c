/* 第六章编程练习第十六题 */
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
	printf("%d 年Deirdre的投资超过Daphne,投资金额为：Deirdre：%f,Daphne:%f", i, Deir, Daph);
	
	return 0;
} 
