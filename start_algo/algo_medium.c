/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 00:04:25 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/27 19:07:27 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	algo_medium(int *stack_a, int *stack_b, int *index_a, int *index_b)
{
	print_stack(stack_a, index_a, "tab a");
	printf("%d <- find min \n", find_min(stack_a, index_a));
	printf("%d <- find max \n", find_max(stack_a, index_a));
	printf("%d <- find min index  \n", find_min_index(stack_a, index_a));
	printf("%d <- find max index \n", find_max_index(stack_a, index_a));
	//algo_verysmall(stack_a, stack_b, index_a, index_b);
}

int	ft_ok(int *stack_a, int *index_a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j != index_a[0] + 1)
	{
		if (stack_a[i] > stack_a[j])
			return (1);
		i++;
		j++;
	}
	return (0);
}
