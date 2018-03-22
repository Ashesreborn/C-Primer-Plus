/* 第二章编程练习第八题 */
#include <stdio.h>
void one_three(void);
void two(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!\n");
	
	return 0;
}

void one_three(void)
{
	printf("oen\n");
	two();
	printf("\nthree\n");
}

void two(void)
{
	printf("two");
}
