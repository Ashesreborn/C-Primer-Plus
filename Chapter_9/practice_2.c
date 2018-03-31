/* 第九章编程练习第二题 */
#include <stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	
	printf("Please enter one character and two integer:");
	scanf("%c %d %d",&ch, &i, &j);
	chline(ch,i,j);
	
	return 0;
} 

void chline(char ch, int i, int j)
{
	int k, l;
	
	for(k = 1;k <= j;k++)
	{
		for(l = 1;l <= i;l++)
			printf("%c",ch);
		printf("\n");
	}
}
