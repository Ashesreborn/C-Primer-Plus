/* 第九章编程练习第三题 */
#include <stdio.h>
void chline(void);
int main(void)
{
	
	chline();
	
	return 0;
} 

void chline(void)
{
	int k, l;
	char ch;
	int i, j;
	
	printf("Please enter one character and two integer:");
	scanf("%c %d %d",&ch, &i, &j);
	
	for(k = 1;k <= j;k++)
	{
		for(l = 1;l <= i;l++)
			printf("%c",ch);
		printf("\n");
	}
}
