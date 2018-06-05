#include <stdio.h>

int ft_put_char(char c)
{
    write(1, &c, 1);
    return 0;
}
char *ft_put_str(char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        ft_put_char(str[count]);
        count += 1;
    }
    return (str);
}

int ft_put_nbr(int nb)
{
    int is_negative = 0;
    int unit = nb;
    int zero_count = 1;
    
    if (nb == -2147483648)
        ft_put_str("-2147483648");
    else
    {
        if (nb < 0)
        {
            ft_put_char('-');
            nb *= -1;
        }
        if (nb > 9)
            ft_put_nbr(nb / 10);
        ft_put_char((nb % 10) + '0');
    }
    return 0;
}
