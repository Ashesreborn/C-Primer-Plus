/* guess.c -- һ������Ҵ���Ĳ����ֳ��� */
#include <stdio.h>
int main(void)
{
	int guess = 1;
	
	printf("Pick an integer from 1 to 100.I will try toguess ");
	printf("it.\nRespond witha y if my guess is riht and with");
	printf("\an n if it is wron.\n");
	printf("Uh...is your number %d?\n",guess);
	while(getchar() != 'y')				/* ��ȡ��Ӧ����y���Ա� */
	 	printf("Well, then, is it %d?\n", ++guess);
	printf("I knew I could do it!\n");
	
	return 0;
}
