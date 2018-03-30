/* 第八章编程练习第四题 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
int main(void)
{
	char ch;
	int n_words = 0;		//单词数
	long n_chars = 0L;		//字符数 
	bool inword = false;		//如果c在单词中,inword等于true 
	double avera;
	
	while((ch = getchar()) != EOF)
	{
		if(!(isspace(ch)) && !(ispunct(ch)))
			n_chars++;
		if((!isspace(ch) && !ispunct(ch)) && !inword )
		{
			inword = true;		//开始一个新的单词
			n_words++; 
		}
		if((isspace(ch) || ispunct(ch))&& inword)
		{
			inword = false;
		}
		
	}
	avera = (double)n_chars / n_words;
	printf("一共有%d个单词，%ld个字母,平均每个单词字母数为:%f\n", n_words, n_chars, avera);
	
	return 0;
}
