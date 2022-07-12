/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:49:14 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 11:14:00 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_rr(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	r_ra(stack_a, stack_b, imax_a, imax_b);
	r_rb(stack_a, stack_b, imax_a, imax_b);
}
