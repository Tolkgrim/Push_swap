/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_ra.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:35:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/14 14:14:39 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_ra(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	ft_printf("rra\n");
	sauvegarde = stack_a[0];
	i = 0;
	tmp = calloc(sizeof(int), imax_a[0] + 10);
	duplicate(tmp, stack_a, imax_a);
	while (i != imax_a[0] + 1)
	{
		stack_a[i] = tmp[i + 1];
		i++;
	}
	stack_a[imax_a[0]] = sauvegarde;
	free(tmp);
}
