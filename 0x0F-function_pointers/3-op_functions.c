#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - op_add
 * @a:a
 * @b: b
 * Return: 0
 */

int op_add(int a, int b)
{
  return (a + b);
}

/**
 * op_sub - op_sub
 * @a: a
 * @b: b
 *
 * Return: (a - b)
 */

int op_sub(int a, int b)
{
  return (a - b);
}

/**
 * op_mul - op_mul
 * @a: a
 * @b: b
 * Return: the multiple
 */

int op_mul(int a, int b)
{
  return (a * b);
}

/**
 * op_div - op_div
 * @a: a
 * @b: b
 * Return: the
 */

int op_div(int a, int b)
{
  if (b == 0)
  {
    printf("Error\n");
    exit(100);
  }

  return (a / b);
}

/**
 * op_mod - the func
 * @a: a
 * @b: b
 * Return: a % b
 */

int op_mod(int a, int b)
{
  if (b == 0)
  {
    printf("Error\n");
    exit(100);
  }

  return (a % b);
}
