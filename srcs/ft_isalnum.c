#include "../libft.h"

int		ft_isalnum(ch)
{
	return (ft_isalpha(ch) || ft_isdigit(ch));
}