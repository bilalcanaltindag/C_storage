#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	ilk;
	int	tut;

	ilk = 0;
	while (ilk < size)
	{
		while (tab[ilk] > tab[ilk + 1])
		{
			tut = tab[ilk];
			tab[ilk] = tab[ilk + 1];
			tab[ilk + 1] = tut;
			ilk = 0;
		}
		ilk++;
	}
}
