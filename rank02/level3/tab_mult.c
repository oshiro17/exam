/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noshiro <noshiro@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:47:27 by noshiro           #+#    #+#             */
/*   Updated: 2023/05/17 21:16:06 by noshiro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *c)
{
	int i = 0;
	int rec = 0;

	while (c[i])
	{
		rec = rec * 10 - (c[i] - '0');
		i++;
	}
	return (rec * -1);
}

void	put_num(int n)
{
	char c;

	if (n >= 10)
		put_num(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i = 1;
	int pro = 0;
	
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		while (i <= 9)
		{
			pro = i * num;
			put_num(i);
			write(1, " X " ,3);
			put_num(num);
			write(1, " = ", 3);
			put_num(pro);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
