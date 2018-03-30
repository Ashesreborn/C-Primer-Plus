/* 第八章编程练习第一题 */
#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	
	while((ch = getchar()) != EOF)
		count++;
	printf("一共有%d个字符\n", count);
	
	return 0;
} 
