/**
*_memset - fill memory with a constant byte
*@n: number of bytes
*@s: pointer to block of memory
*@b: constant to replace with
*Return: s (pointer to block of memory)
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
