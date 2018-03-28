/* 第六章编程练习第四题 */
#include <stdio.h>
int main(void)
{
	int i, j, k;
	char alpha[26];
	k = 0;
	
	for(i = 0; i < 26; i++)
	{
		alpha[i] = 'A' + i;
	}
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%c",alpha[k++]);
		}
		printf("\n");
	}
	
	return 0;
}
