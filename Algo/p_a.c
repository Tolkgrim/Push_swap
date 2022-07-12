/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:18:37 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 11:30:51 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	p_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	if (imax_b < 0)
		return ;
	stack_a[imax_a[0] + 1] = stack_b[imax_b[0]];
	imax_a[0]++;
	imax_b[0]--;
}
