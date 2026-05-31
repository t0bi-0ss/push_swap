#include "../ft_pushswap.h"

void    ft_putnbr(int n)
{
        long    num;
        long    quotient;
        char    to_be_passed;

        num = (long)n;
        if (num < 0)
        {
                write(1, "-", 1);
                num *= -1;
        }
        quotient = num / 10;
        to_be_passed = (num % 10) + '0';
        if (quotient > 0)
                ft_putnbr(quotient);
        write(1, &to_be_passed, 1);
}
