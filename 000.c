#include <stdio.h>

char moji[5][40];
void kakunou(void);
void hyoji(void);

int main(void)
{
	kakunou();
	hyoji();
	
	return 0;
}

void kakunou(void)
{
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d つ目の文字列を入力", (i + 1));
		scanf("%s", moji[i]);
	}
}

void hyoji(void)
{
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d つ目の文字列は %d です\n",(i + 1),(moji[i]));
	}
}