/* ��ʮ�±����ϰ��ʮ���� */
#include <stdio.h>
#define MONTHS 12			//һ����·�
#define YEARS 5			//���� 
float yeartotal(float arr[][MONTHS], int n);
float monthtotal(float arr[][MONTHS], int n);
int main(void)
{
	// ��2010 ~ 2014��Ľ�ˮ�����ݳ�ʼ������
	const float rain[YEARS][MONTHS] = 
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 },
	};
	int year, month;
	float subtot, total;
	
	printf(" YEAR  RAINFALL  (inches)\n");
	total = yeartotal(rain, 5);
	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
	printf("  Nov  Dec\n");
	
	subtot = monthtotal(rain, 5);
	
	return 0;
}


float yeartotal(float arr[][MONTHS], int n)
{
	int i, j;
	float subtot, total;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < MONTHS; j++)
			subtot += arr[i][j];
		printf("%5d %15.lf\n", 2010 +i, subtot);
		total += subtot;		//5����ܽ�ˮ�� 
	}
	return total;
}

float monthtotal(float arr[][MONTHS], int n)
{
	int i, j;
	float subtot, total;
	
	for(i = 0; i < MONTHS; i++)
	{
		for(j = 0; j < n; j++)
			subtot += arr[j][i];
		printf("%4.1f ", subtot / n);		//5����ܽ�ˮ�� 
	}
	printf("\n");
	return subtot;
}
