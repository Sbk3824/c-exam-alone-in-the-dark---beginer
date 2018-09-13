/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 15:10:49 by skuntoji          #+#    #+#             */
/*   Updated: 2018/09/13 15:23:34 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int count_letter(char c)
{
	int r;

	r = 0;
	if (c >= 'A' && c <= 'Z')
		r = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		r = c - 'a' + 1;
	else
		r = 1;
	return (r);
}

int	 main(int ac, char **av)
{
	int r;

	r = 0;
	if (ac == 2)
	{
		while (*av[1])
		{
			r = count_letter(*av[1]);
			while (r--)
				write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
