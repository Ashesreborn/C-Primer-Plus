/* �����±����ϰ�ڰ��� */
#include <stdio.h>
#define GAL 3.785
#define MILES 1.1609
int main(void)
{
	float mile,numb,euro,amer;
	
	printf("Please enter your mileage and oil number: ");
	scanf("%f %f",&mile,&numb);
	printf("����ÿ����������ʻ%.1f���\n",mile/numb);
	euro = (mile * MILES )/( numb * GAL);
	amer = (numb * GAL) / (mile * MILES * 100);
	printf("ŷ�����ı�ʾ����%f",euro);
	printf("�������ı�ʾ��: %f",amer);
	
	return 0;
}
