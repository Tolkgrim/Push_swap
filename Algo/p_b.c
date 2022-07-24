/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:22:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/24 20:39:46 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	p_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	*copy;
	int	i;
	int save;

	i = 1;
	if (imax_a[0] < 0)
		return ;
	ft_printf("pb\n");
	copy = calloc(sizeof(int), imax_a[0] + 10);
	copy = duplicate(copy, stack_b, imax_b);
	if (imax_b[0] == -1)
		stack_b[0] = stack_a[0];
	else
	{
		while (i != imax_b[0] + 1)
		{
		stack_b[i] = copy[i - 1];
		i++;
		}
	}
}
