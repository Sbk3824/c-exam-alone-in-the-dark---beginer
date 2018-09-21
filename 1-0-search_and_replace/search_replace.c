/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 21:12:49 by skuntoji          #+#    #+#             */
/*   Updated: 2018/09/20 21:29:45 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4)
	{
		if (av[2][1]!='\0' && av[3][1]!='\0')
		{
			write(1,"\n",1);
			return (0);
		}
		while (av[1][i])
		{
			if (av[1][i] == av [2][0])
				av[1][i] = av[3][0];
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}