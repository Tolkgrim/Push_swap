/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_a.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:26:04 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/13 12:46:04 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b)
{
	int	*tmp;
	int	i;
	int	sauvegarde;

	ft_printf("r_a\n");
	sauvegarde = stack_a[imax_a[0]];
	i = imax_a[0];
	tmp = malloc(sizeof(int) * imax_a[0]);
	duplicate(tmp, stack_a, imax_a);
	while (i != -1)
	{
		stack_a[i] = tmp[i - 1];
		i--;
	}
	stack_a[0] = sauvegarde;
	free(tmp);
}
