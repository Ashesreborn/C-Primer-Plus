/* �ڰ��±����ϰ��һ�� */
#include <stdio.h>
int main(void)
{
	char ch;
	int count = 0;
	
	while((ch = getchar()) != EOF)
		count++;
	printf("һ����%d���ַ�\n", count);
	
	return 0;
} 
