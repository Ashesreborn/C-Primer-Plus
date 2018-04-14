/* P336 */
char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	
	ret_val = fgets(st, n, stdin);
	if(ret_val)			//即,ret_val != NULL
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	} 
	
	return ret_val;
}

/*
***遇到不合适的输入时毫无反应. 
***它丢弃多于的字符时,既不通知程序也不告知用户 
*
*
*/
