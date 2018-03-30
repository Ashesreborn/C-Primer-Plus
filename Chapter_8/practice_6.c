/* 第八章编程练习第六题 */
#include <stdio.h>
char get_first(void);
int main(void)
{
	char ch;
	
	ch = get_first();
	printf("读取的第一个字符为：%c",ch);
}

char get_first(void)
{
	char ch;
	
	while(isspace((ch = getchar())))
		continue;
	while(getchar() != '\n')
		continue;
	
	return ch;
}
