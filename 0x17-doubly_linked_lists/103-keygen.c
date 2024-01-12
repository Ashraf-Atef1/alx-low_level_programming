#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - keygen generates a key for the user
 * @argc: the number of the arguments
 * @argv: the list of the arguments
 * Return: 0 if succesed or 1 otherwise
 */
int main(int argc, char *argv[])
{
	char pass[7] = "", *uName = argv[1], *codex;
	int uLen = strlen(uName), i = 0, tmp = 0;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
		return (1);
	pass[0] = codex[(uLen ^ 0x3b) & 0x3f];
	for (i = 0; i < uLen; i++)
		tmp += uName[i];
	pass[1] = codex[(tmp ^ 0x4f) & 0x3f];
	for (i = 0, tmp = 1; i < uLen; i++)
		tmp *= uName[i];
	pass[2] = codex[(tmp ^ 0x55) & 0x3f];
	for (i = 0, tmp = 1; i < uLen; i++)
		if (tmp < uName[i])
			tmp = uName[i];
	srand(tmp ^ 0xe);
	pass[3] = codex[rand() & 0x3f];
	for (i = 0, tmp = 0; i < uLen; i++)
		tmp += uName[i] * uName[i];
	pass[4] = codex[(tmp ^ 0xef) & 0x3f];
	for (i = 0, tmp = 0; i < *uName; i++)
		tmp = rand();
	pass[5] = codex[(tmp ^ 0xe5) & 0x3f];
	pass[6] = '\0';
	printf(pass);
	return (0);
}
