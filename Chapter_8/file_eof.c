/* file_eof.c -- ��һ���ļ�����ʾ���ļ� */
#include <stdio.h>
#include <stdlib.h>					//Ϊ��ʹ��exit() 
int main(void)
{
	int ch;
	FILE * fp;
	char fname[50];					//�����ļ���
	
	printf("Enter the name of the file: ");
	scanf("%s",fname);
	fp = fopen(fname, "r");			//�򿪴���ȡ�ļ�
	if(fp == NULL)					//���ʧ��
	{
		printf("Failed to open fiile.Bye\n");
		exit(1);					//�˳����� 
	} 
	//getc(fp)�Ӵ�ide�ļ��л�ȡһ���ַ�
	while((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);						//�ر��ļ�
	
	return 0; 
}
