
#include "../ft_pushswap.h"

void error_message(void)
{
    char *str;

    str = "Error\n";
    write(2, str, ft_strlen(str));
}