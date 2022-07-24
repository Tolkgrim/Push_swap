/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 15:55:10 by jdutschk          #+#    #+#             */
/*   Updated: 2022/07/15 13:49:25 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "limits.h"

//---------tools-------//
void	print_stack(int *stack, int *j, char *name_stack);

//--------------error-------------//
int		ft_check_errors_start(int ar, char **st);
int		ft_check_arg1(char *str);
int		ft_check_multiple_arg(char **lst);
int		verif_double(int *t, int nbr_case);
int		ft_check_argv2(char *str);
int		check_argv3(char *s);
int		compare_to_int(char *str);
int		ft_check_arg1v2(char *str);
int		ft_check_arg1v3(char *str);
//-----------init-------------------//
int		*init_list(int ac, char **argv);
int		convert_lst_into_tab(char **lst, int *tab);
int		convert_str_into_tab(char *str, int *lst);
int		define_cmpt(char **str, int ac);
int		make_int_tab(int *tab, char **argv, int argc);
int		nbr_cmpt_lst_mutiple(char **argv);
int		nbr_cmpt_lst(char *str);

//---------------start algo---------------//
void	choose_algo(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	algo_for_3(int *stack_a, int *stack_b, int *index_a, int *index_b);
void	starting(int *stack_a, int *stack_b, int index_a, int index_b);
int		ft_finish(int *stack_a, int *index_a, int *index_b);
int		ft_nbr_op_index(int *stack_a, int *index_a);
void	algo_verysmall(int *stack_a, int *stack_b, int *index_a, int *index_b);
//---------------algo---------------//
void	duplicate(int *new, int *actual, int *index);
void	p_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	p_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_r(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_ra(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_rb(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	r_rr(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	s_a(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	s_b(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
void	s_s(int *stack_a, int *stack_b, int *imax_a, int *imax_b);
#endif