/* typesize.c -- 打印类型大小 */
#include <stdio.h>
int main(void)
{
	/* C99为类型大小提供%u转换说明 */
	printf("Type int has a size of %u bytes.\n", sizeof(int));
	printf("Type short has a size of %u bytes.\n", sizeof(short));
	printf("Type char has a size of %u bytes.\n",sizeof(char));
	printf("Type long has a size of %u bytes.\n",sizeof(long));
	printf("Type long long has a size of %u bytes.\n",sizeof(long long));
	printf("Types double has a size of %u bytes.\n",sizeof(double));
	printf("Type long doublehas a size of %u bytes.\n",sizeof(long double));
	
	return 0;
}
