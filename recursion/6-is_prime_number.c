#include "main.h"
/**
* check_prime - checking if a number is prime
* @n: the numer
* @check: if number is 1 it is prime
* Return: 1 if prime, otherwise return 0
*/
int check_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
return check_prime(n, i - 1);
}

#include "main.h"
/**
 * is_prime_number - check if number is prime
 * @n: the input number
 * Return: 1 if the input is a prime number otherwise return 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, n - 1));
}
