/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:22:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 12:09:56 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	p_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	if (imax_a[0] < 0)
		return ;
	stack_b[imax_b[0] + 1] = stack_a[imax_a[0]];
	imax_b[0]++;
	imax_a[0]--;
}
