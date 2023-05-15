#include <stdio.h>
#include <unistd.h>

int	get_place(int len, int place)
{
	int rec = 1;
	
	len--;
	while (len--)
		rec = rec * place;
	return(rec);
}

int	get_num(char c)
{
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	len = 0;
	int rec = 0;
	int sign = -1;
	int place = 0;

	if (*str == '+' || *str == '-')
	{
		str++;
		if (*str == '-')
			sign = -1;
	}
	while (str[len])
	{	
		len++;
	}
	while (len)
	{
		place = get_place(len, str_base);
		printf("%d\n",place);
		rec = rec + place * get_num(*str);
		printf("%c:%d\n",*str,get_num(*str));
		len--;
		str++;
	}
	return(rec);
}

int main() {
    const char *str = "1223333201";
    int base = 4;
    int result = ft_atoi_base(str, base);
    
    printf("String: %s\n", str);
    printf("Base: %d\n", base);
    printf("Result: %d\n", result);
    
    return 0;
}
