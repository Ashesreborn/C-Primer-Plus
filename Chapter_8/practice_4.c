/* �ڰ��±����ϰ������ */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	char ch;
	int n_words = 0;		//������
	long n_chars = 0L;		//�ַ��� 
	bool inword = false;		//���c�ڵ�����,inword����true 
	double avera;
	
	while((ch = getchar()) != EOF)
	{
		if(!(isspace(ch)) && !(ispunct(ch)))
			n_chars++;
		if((!isspace(ch) && !ispunct(ch)) && !inword )
		{
			inword = true;		//��ʼһ���µĵ���
			n_words++; 
		}
		if((isspace(ch) || ispunct(ch))&& inword)
		{
			inword = false;
		}
		
	}
	avera = (double)n_chars / n_words;
	printf("һ����%d�����ʣ�%ld����ĸ,ƽ��ÿ��������ĸ��Ϊ:%f\n", n_words, n_chars, avera);
	
	return 0;
}
