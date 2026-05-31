
#include "../ft_pushswap.h"

int ft_putstr(char *str)
{
    if (!str)
        return (0);
    return (write(1, str, ft_strlen(str)));
}