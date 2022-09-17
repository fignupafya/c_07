/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:33:19 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/17 14:33:20 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sepsize(char *sep)
{
	int	a;

	a = 0;
	while (sep[a] != 0)
		a++;
	return (a);
}

char	*createarr(char **strs, int size, char *sep)
{
	int	a;
	int	cntr;
	int	b;
	char *arr;

	if (size < 1)
	{
		arr = malloc(1);
		arr[0] = 0;
		return (arr);
	}
	cntr = 0;
	a = 0;
	b = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != 0)
		{
			cntr++;
			b++;
		}
		a++;
	}
	cntr += sepsize(sep) * (size - 1) + 1;
}

void	addsep(char *sep, char *arr, int index)
{
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *arr;
	int	a;
	int	b;
	int	index;

	index = 0;
	a = 0;
	*arr = createarr(strs, size, sep);
	while (a < size)
	{
		b = 0;
		while (strs[a][b] != 0)
		{
			arr[index] = strs[a][b];
			b++;
			index++;
		}
		a++;
		if (a != size - 1)
			addsep(sep, arr, index);
	}
	arr[index] = 0;
	return (arr);
}
