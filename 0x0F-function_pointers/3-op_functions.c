#include <stido.h>
#include <stdlib.h>

/**
 * op_add - sums two inputs
 * @a: first integer to sum
 * @b: second integer in sum
 *
 * Return: returns the sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two inputs
 * @a: integer from which to subtract
 * @b: integer to be subtracted
 *
 * Return: the difference
 */

int op_sub(int a, int b)
{
	return (abs(a - b));
}

/**
 * op_mul - multiplies two inputs
 * @a: first integer to multiply
 * @b: second integer to multiply by
 *
 * Return: returns the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides one input by the other
 * @a: integer to be divided
 * @b: the number of parts into which to divide
 *
 * Return: the result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo operation
 * @a: the number
 * @b: the mod
 *
 * Return: result of modulo operation
 */

int op_mod(int a, int b)
{
	return (a % b);
}
