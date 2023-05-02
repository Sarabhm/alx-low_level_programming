#include "main.h"
/**
 *swap_int - it will swap the value of two int
 *@a: int to swap
 *@b: int to swap
 */
void swap_int(int *a, int *b)
{
	int SWAP;

	SWAP = *a;
	*a = *b;
	*b = SWAP;
}
