/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starting+start_algo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:37:06 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 11:40:58 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	starting(int *stack_a, int *stack_b, int index_a, int index_b)
{
	int	*i_a;
	int	*i_b;

	i_a = &index_a;
	i_b = &index_b;
	start_algo(stack_a, stack_b, i_a, i_b);
}

void	start_algo(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	p_b(stack_a, stack_b, index_a, index_b);
	print_stack(stack_a, index_a, "stack a");
	print_stack(stack_b, index_b, "stack b");
}
