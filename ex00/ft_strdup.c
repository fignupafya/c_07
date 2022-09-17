/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:41:05 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/13 10:48:35 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	slen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*newstr;
	int		a;

	a = 0;
	newstr = malloc((slen(src) + 1) * 4);
	newstr[slen(src)] = 0;
	while (src[a] != 0)
	{
		newstr[a] = src[a];
		a++;
	}
	return (newstr);
}
