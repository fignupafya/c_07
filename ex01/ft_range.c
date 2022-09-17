/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:51:47 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/13 11:01:27 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	a;
	int	*arr;

	a = min;
	len = 0;
	if (min >= max)
		return (NULL);
	while (a < max)
	{
		len++;
		a++;
	}
	arr = malloc(len * 4);
	a = 0;
	while (min < max)
	{
		arr[a] = min;
		a++;
		min++;
	}
	return (arr);
}
