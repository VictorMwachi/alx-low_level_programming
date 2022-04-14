#include "main.h"
/**
 * more_numbers-prints 10 times the numbers 0 to 14
 */
void more_numbers(void)
{int k,i;
	for (k = 0;k <= 10; k++)
		for (i =0; i <= 14; i++)
			if (i >= 10)
				_putchar((i/10)+48);
			_putchar((i % 10) + 48);
		_putchar('\n');
}
