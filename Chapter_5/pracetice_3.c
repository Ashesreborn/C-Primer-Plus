/* 第二章编程练习第三题 */
#include <stdio.h>
#define D_P_W 7
int main(void)
{
	int days,week,dayst;
	
	printf("Please enter a day number:");
	scanf("%d",&days);
	while(days > 0)
	{
		week = days / D_P_W;
		dayst = days % D_P_W;
		printf("%d days are %d weeks, %d days.\n", days, week, dayst);
		printf("Please enter a next days number:");
		scanf("%d",&days);
	}
	printf("Done!");
	
	return 0;
}
