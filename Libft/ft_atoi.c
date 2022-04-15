/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cupatham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:54:49 by cupatham          #+#    #+#             */
/*   Updated: 2022/04/16 00:59:02 by cupatham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stddef.h"

int	ft_atoi(const char *str)
{
	size_t				index;
	int					neg;
	unsigned long int	res;

	index = 0;
	neg = 1;
	res = 0;
	while (IS_WSPACE(str[index]))
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			neg *= -1;
	while (ft_isdigit(str[index]))
	{
		res *= 10;
		res += str[index] - '0';
		index++;
	}
	return (res * neg);
}
