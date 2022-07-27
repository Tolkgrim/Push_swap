/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raccourci.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:25:41 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/27 19:35:47 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_max_on_top(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	while (find_max_index(stack_a, index_a) != 0)
	{
		if (find_max_index(stack_a, index_a) <= index_a[0] / 2)
			r_a(stack_a, stack_b, index_a, 1);
		else
			r_ra(stack_a, stack_b, index_a, 1);
	}
}
