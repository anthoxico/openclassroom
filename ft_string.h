#include <stdlib.h>

int ft_str_len(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length += 1;
    return (length);
}
char *ft_str_copy(char *dest, char *source)
{
    int count = 0;
    int length = ft_str_len(source);
    char *str;

    str = malloc(sizeof(char) * length + 1);
    str[length] = '\0';
    while (source[count] != '\0')
    {
        str[count] = source[count];
        count++;
    }
    dest = str;
    return (dest);
}
int ft_atoi(char *str)
{
    int result = 0;
    int count = 0;
    int is_negative = 0;
    long long int verif = 0;
    
    while (str[count] == ' ')
        count += 1;
    if (str[count] == '-')
        is_negative = 1;
    if (str[count] == '+' || str[count] == '-')
        count += 1;
    while (str[count] >= '0' && str[count] <= '9' && verif <= 2147483647)
    {
        result *= 10;
        result += str[count] - '0';
        count += 1;
        verif = result;
        verif = (verif * 10) + str[count] - '0';
    }
    if (is_negative == 1)
        return (result * -1);
    return (result);
}
