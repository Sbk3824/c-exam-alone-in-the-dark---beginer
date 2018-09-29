/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuntoji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 15:28:04 by skuntoji          #+#    #+#             */
/*   Updated: 2018/09/29 15:37:20 by skuntoji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *s)
{
	int i;
	char *d;

	i = 0;
	while (s[i])
		i++;
	d = (char *)malloc(sizeof(*d) * (i + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\n';
	return (d);
}
