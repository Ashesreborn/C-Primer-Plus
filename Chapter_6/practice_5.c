/* 第六章编程练习第五题 */
#include <stdio.h>
int main(void)
{
	int i, j, k,l;
	char upper,alpha[26];
	
	for(i = 0; i < 26; i++)
	{
		alpha[i] = 'A' + i;
	}
	printf("Please enter a Uppercase:");
	scanf("%c",&upper);
	for(i = 0; i <= upper-'A';i++)
	{
		for( j = upper-'A'-i;j > 0;j--)
			printf(" ");
		for(k = 0;k <= i;k++)
			printf("%c", alpha[k]);
		for(l = i-1;l >= 0;l--)
			printf("%c",alpha[l]);
		
		printf("\n");
	}
	
	return 0;
}
