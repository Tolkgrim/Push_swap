/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_b.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:26:33 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/13 12:46:14 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	ft_printf("r_b\n");
	sauvegarde = stack_b[imax_b[0]];
	i = imax_b[0];
	tmp = malloc(sizeof(int) * imax_b[0]);
	duplicate(tmp, stack_b, imax_b);
	while (i != -1)
	{
		stack_b[i] = tmp[i - 1];
		i--;
	}
	stack_b[0] = sauvegarde;
	free(tmp);
}
