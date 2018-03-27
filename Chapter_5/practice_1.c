/* 第五章编程练习第一题 */
#include <stdio.h>
#define M_P_H	60
int main(void)
{
	int hour,minute,minutet;
	hour = 0;
	
	printf("Please enter the time: ");
	scanf("%d",&minute);
	while( minute > 0)
	{
		hour = minute / M_P_H;
		minutet =minute % M_P_H;
		printf("%d mintue(s) is %d hour(s) and %d minutes(s).\n", minute, hour, minutet);
		printf("Please enter the next time:");
		scanf("%d",&minute);
	}
	printf("Done!");
	
	return 0;
} 
