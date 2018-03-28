/* 第六章编程练习第六题 */
#include <stdio.h>
int main(void)
{
	int i, j, number;
	
	printf("Please enter two number:");
	scanf("%d %d", &i, &j);
	for(; j <= i;j++ )
	{
		printf("%5d   %5d  %5d\n", j, j*j, j*j*j);
	}
	
	return 0;
}
