#include "libft.h"

int	ft_isacii(int c)
{
	unsigned int	i;
	
	i = (unsigned int) c;
	return (i <= 127);
}
