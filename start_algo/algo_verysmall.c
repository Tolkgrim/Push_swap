/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_verysmall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:43:37 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/24 20:10:28 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//stack_a, stack_b, index_a, index_b

void	algo_verysmall(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] < stack_a[2])
		s_a(stack_a, stack_b, index_a, index_b);
	if (stack_a[0] > stack_a[1] && stack_a[1] < stack_a[2]
		&& stack_a[0] > stack_a[2])
		r_a(stack_a, stack_b, index_a, index_b);
	if (stack_a[0] > stack_a[1] && stack_a[1] > stack_a[2]
		&& stack_a[0] > stack_a[2])
	{
		s_a(stack_a, stack_b, index_a, index_b);
		r_ra(stack_a, stack_b, index_a, index_b);
		p_b(stack_a, stack_b, index_a, index_b);
	}
	print_stack(stack_a, index_a, "loulou");
}
