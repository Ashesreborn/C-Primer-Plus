/* 第九章编程练习第十题 */
#include <stdio.h>
void to_base_n(unsigned long number, int n);

int main(void)
{
	unsigned long number;
	int n;
	
	printf("Enter an integer  (q to quit):\n");
	while(scanf("%lu %d", &number, &n) == 2)
	{
		if(n < 2 || n > 10)
		{
			printf("The second number is greater than 2 and less than 10.\n");
			continue;
		}
		printf("%d equivalent: ", n);
		to_base_n(number, n);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");
	
	return 0;
}

void to_base_n(unsigned long number, int n)		/* 递归函数 */
{
	int r;
	
	r = number % n;
	if(number >= n)
	{
		number = number /n;
		to_base_n(number,n);
	}
	printf("%d",r);
	
	return;
}
