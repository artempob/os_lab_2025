#include "swap.h"

void Swap(char *left, char *right)
{
	char middle;
	middle = *left;
	*left = *right;
	*right = middle;

}
