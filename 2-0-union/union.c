/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 17:08:01 by skuntoji          #+#    #+#             */
/*   Updated: 2018/09/29 17:15:50 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int not_seen_before(char *str, int max_pos, char c)
{int i;

	i = -1;
	while (++i < max_pos)
		if (str[i] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int	i;
	int j;

	i = 0;
	while (s1[i])
	{
		if (not_seen_before(s1, i, s1[i]))
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (not_seen_before(s1, i, s2[j]) && not_seen_before(s2, j, s2[j]))
			write(1, &s2[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
		ft_union(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
