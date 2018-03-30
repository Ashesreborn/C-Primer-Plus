/* 第八章编程练习第三题 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int countupp = 0, countlow = 0;
	
	while((ch = getchar()) != EOF)
	{
		if(islower(ch))
			countlow++;
		else if(isupper(ch))
			countupp++;
		
	}
	printf("大写字母个数为：%d,小写字母个数为:%d\n", countupp,countlow);
	
	return 0;
}
