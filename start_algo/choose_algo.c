/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:41:53 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/24 16:50:32 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	choose_algo(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	if (!ft_finish(stack_a, index_a, index_b))
		return ;
	if (index_a[0] < 2 && ft_finish(stack_a, index_a, index_b))
		s_a(stack_a, stack_b, index_a, index_b);
	else if (index_a[0] == 2)
		algo_verysmall(stack_a, stack_b, index_a, index_b);
}
