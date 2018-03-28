/* 第六章编程练习第十题 */
#include <stdio.h>
int main(void)
{
	int up, low, sum, i;
	
	printf("Enter lower and upper integer limits:");
	scanf("%d %d", &low, &up);
	while(low < up)
	{
		i = low;
		for(;i <= up; i++)
			sum = sum + i*i;
		printf("The sums of the squares from %d to %d is %d\n", low*low, up * up, sum);
		printf("Enter next set of limits:");
		scanf("%d %d", &low, &up);
	}
	printf("Done\n");
	
	return 0;
}
