/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:08:34 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/14 16:01:38 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	*arr;

	a = 0;
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	arr = malloc((max - min) * 4);
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[a] = min;
		a++;
		min++;
	}
	*range = arr;
	return (max - min);
}
