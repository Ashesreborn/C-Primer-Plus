/* 第五章编程练习第六题 */
#include <stdio.h>
int main(void)
{
	int count, sum,number;
	count = 0;
	sum = 0;
	
	printf("Pleae enter a number:");
	scanf("%d",&number);
	while(count++ < number)
	{
		sum = sum + count * count;
	}
	printf("sum = %d\n",sum);
	
	return 0;
}
