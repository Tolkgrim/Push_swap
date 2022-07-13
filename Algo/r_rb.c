/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:35:01 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/13 12:47:03 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_rb(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	ft_printf("r_rb\n");
	sauvegarde = stack_b[0];
	i = 0;
	tmp = malloc(sizeof(int) * imax_b[0]);
	duplicate(tmp, stack_b, imax_b);
	while (i != imax_b[0] + 1)
	{
		stack_b[i] = tmp[i + 1];
		i++;
	}
	stack_b[imax_b[0]] = sauvegarde;
	free(tmp);
}
