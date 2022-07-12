/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:55:49 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 11:17:53 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	s_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	tmp;

	if (imax_a[0] <= 0)
		return ;
	tmp = stack_a[imax_a[0]];
	stack_a[imax_a[0]] = stack_a[imax_a[0] - 1];
	stack_a[imax_a[0] - 1] = tmp;
}
