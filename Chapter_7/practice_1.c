/* 第二章编程练习第一题 */
#include <stdio.h>
int main(void)
{
	char cha;
	int space = 0, lines = 0, other = 0;
	
	printf("Please enter :");
	while(scanf("%c",&cha)==1 && cha != '#')
	{
		if(cha == ' ')
			space++;
		else if(cha == '\n')
			lines++;
		else
			other++;
			
	}
	printf("空格数为：%d,换行符数:%d,所有其他字符:%d\n",space, lines, other);
	
	return 0;
}
