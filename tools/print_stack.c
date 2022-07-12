/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 10:49:36 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/12 12:10:24 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(int *stack, int *j, char *name_stack)
{
	int	i;

	ft_printf("tableau [%s]\n", name_stack);
	i = j[0];
	while (i != -1)
	{
		ft_printf("====> %d \n", stack[i]);
		i--;
	}
}
