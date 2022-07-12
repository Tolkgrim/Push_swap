/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg1v2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:23:11 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/11 17:22:31 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check_arg1v2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		if (str[i] == ' ')
		{
			i++;
		}
		if (str[i] == '-')
		{
			if (str[i + 1] < '0' || str[i + 1] > '9')
				return (ft_printf("erreur plusieurs '-'\n"));
			i++;
		}
	}
	return (0);
}
