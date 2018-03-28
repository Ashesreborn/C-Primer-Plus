/* 第六章编程练习第七题 */
#include <stdio.h>
int main(void)
{
	int friends, i;
	friends = 5;
	
	for(i = 1;friends < 150;i++)
	{
		friends = friends - i;
		friends = friends * 2;
		printf("Rabnud doctor has %d friends.\n", friends);
	}
} 
