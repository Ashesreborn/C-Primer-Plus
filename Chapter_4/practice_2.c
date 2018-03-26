/* 第四章编程练习第二题 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[30];
	
	printf("Please enter your name: ");
	scanf("%s",name);
	printf("Your name is \"%s\"\n",name);
	printf("Your name is \"%20s\"\n",name);
	printf("Your name is \"%-20s\"\n",name);
	printf("Your name is %*s\n", strlen(name)+3, name);
	
	return 0;
}
