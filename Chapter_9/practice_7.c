/* 第九章编程练习第七题 */
#include <stdio.h>
#include <ctype.h>
int correspond(char ch);
int main(void)
{
	char ch;
	int i;
	
	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch))
		{
			printf("%c is a alpha.    ",ch);
			i = correspond(ch);
			printf("its position is %d.\n",i);
		}
		else
			printf("%c  is not a alpha.\n",ch);
			
	}
	
	return 0;
} 

int correspond(char ch)
{
	int i;
	
	ch = tolower(ch);
	i = ch - 'a' + 1;
	
	return i;
}
