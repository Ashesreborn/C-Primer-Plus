/* �ڰ��±����ϰ������ */
#include <stdio.h>
char get_first(void);
int main(void)
{
	char ch;
	
	ch = get_first();
	printf("��ȡ�ĵ�һ���ַ�Ϊ��%c",ch);
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
