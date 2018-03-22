/* nogood.c -- 有错误的程序 */
#include <stdio.h>
int main(void)
(							//不应该用圆括号 
	int n,int n2,int n3;		//应该分行写或者去掉int 
	
	/* 该程序有多处错误 		//没有注释末尾 
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n squared = %d, n cubed = %d\n",n ,n2, n3)  //没有分号	//n3错误 
	
	return 0;
)
