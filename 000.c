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
		printf("%d ‚Â–Ú‚Ì•¶Žš—ñ‚ð“ü—Í", (i + 1));
		scanf("%s", moji[i]);
	}
}

void hyoji(void)
{
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d ‚Â–Ú‚Ì•¶Žš—ñ‚Í %d ‚Å‚·\n",(i + 1),(moji[i]));
	}
}