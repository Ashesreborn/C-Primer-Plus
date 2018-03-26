/* 第四章编程练习第六题 */
#include <stdio.h>
#include <string.h>
int main(void)
{
	char first[20],last[20];
	
	printf("Please enter your firstname: ");
	scanf("%s",first);
	printf("Please enter your lastname: ");
	scanf("%s",last);
	printf("%s %s\n",first, last);
	printf("%*d %*d\n",strlen(first),strlen(first),strlen(last),strlen(last));
	printf("%s %s\n",first,last);
	printf("%-*d %-*d\n",strlen(first),strlen(first),strlen(last),strlen(last));
	
	return 0;
}
