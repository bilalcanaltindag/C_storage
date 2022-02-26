#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int index;
	int tut;

	index = 0;
	while (index < (size / 2))
	{
		tut = tab [index];
		tab [index] = tab [size - 1 - i];
		tab [size - 1 - i] = tut;
		i++;
	}
}
