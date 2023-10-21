#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - find biggest number
 * @usrn: username
 * @len: length 
 * Return: biggest
 */
int f4(char *usrn, int len)
{
	int char;
	int vch;
	unsigned int rand;

	char = *usrn;
	vch = 0;

	while (vch < len)
	{
		if (char < usrn[vch])
			char = usrn[vch];
		vch += 1;
	}

	srand(ch ^ 14);
	rand = rand();

	return (rand & 63);
}

/**
 * f5 - multiplies each char of username
 * @usrn: username
 * @len: length
 * Return: multiplied
 */
int f5(char *usrn, int len)
{
	int char;
	int vch;

	char = vch = 0;

	while (vch < len)
	{
		char = char + usrn[vch] * usrn[vch];
		vch += 1;
	}

	return (((unsigned int)char ^ 239) & 63);
}

/**
 * f6 - random char
 * @usrn: username
 * Return: random
 */
int f6(char *usrn)
{
	int char;
	int vch;

	char = vch = 0;

	while (vch < *usrn)
	{
		char = rand();
		vch += 1;
	}

	return (((unsigned int)char ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc:  count
 * @argv:  vector
 * Return:  0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int length, char, vch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (length = 0; argv[1][length]; length++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(length ^ 59) & 63];
	/* ----------- f2 ----------- */
	char = vch = 0;
	while (vch < length)
	{
		char = char + argv[1][vch];
		vch = vch + 1;
	}
	keygen[1] = ((char *)alph)[(char ^ 79) & 63];
	/* ----------- f3 ----------- */
	char = 1;
	vch = 0;
	while (vch < len)
	{
		char = argv[1][vch] * char;
		vch = vch + 1;
	}
	keygen[2] = ((char *)alph)[(char ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], length)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], length)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (char = 0; keygen[char]; char++)
		printf("%c", keygen[char]);
	return (0);
}
