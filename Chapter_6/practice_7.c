/* 第六章编程练习第七题 */
#include <stdio.h>
#include <string.h>
int main(Void)
{
	char alpha[20];
	int i;
	
	printf("Please enter a word:\n");
	scanf("%s",alpha);
	for(i = strlen(alpha)-1; i >= 0; i--)
		printf("%c",alpha[i]);
		
	
	return 0;
}
