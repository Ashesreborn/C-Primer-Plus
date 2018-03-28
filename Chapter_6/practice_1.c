/* 第六章编程练习第一题 */
#include <stdio.h>
int main(void)
{
	char alpha[26];
	int i;
	
	for(i = 0; i < 26; i++)
	{
		alpha[i] = 'a' + i;
	}
	for(i = 0; i < 26; i++)
	{
		printf("%c", alpha[i]);
	}
	
	return 0;
}
