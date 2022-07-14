/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   starting+start_algo.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 11:37:06 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/14 14:24:31 by jdutschk         ###   ########.fr       */
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
	while (ft_finish(stack_a, index_a, index_b))
	{
		
	}
	free(stack_a);
	free(stack_b);
}

int	ft_finish(int *stack_a, int *index_a, int *index_b)
{
	int	i;
	int	j;

	if (index_b[0] != -1)
		return (1);
	i = 0;
	j = 1;
	while (j != index_a[0] + 1)
	{
		if (stack_a[i] < stack_a[j])
			return (1);
		i++;
		j++;
	}
	ft_printf("c'est bon\n");
	return (0);
}

int	ft_nbr_op_index(int *stack_a, int *index_a)
{
	int	i;
	int	cmpt;
	int	index_cmpt;

	if (index_a[0] == -1)
		return (-1);
	i = 0;
	cmpt = stack_a[0];
	index_cmpt = 0;
	while (i != index_a[0] + 1)
	{
		if (cmpt < stack_a[i])
		{
			index_cmpt = i;
			cmpt = stack_a[i];
		}
		i++;
	}
	return (index_cmpt);
}
