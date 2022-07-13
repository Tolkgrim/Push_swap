/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_r.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:22:30 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/13 12:46:44 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_r(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	r_a(stack_a, stack_b, imax_a, imax_b);
	r_b(stack_a, stack_b, imax_a, imax_b);
}
