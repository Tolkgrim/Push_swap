# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/31 11:24:32 by jdutschk          #+#    #+#              #
#    Updated: 2022/07/12 11:40:19 by jdutschk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = Libft/libft.a

SRC_MAIN = Main/main.c

SRC_TOOLS = tools/print_stack.c

SRC_START = start_algo/starting+start_algo.c

SRC_ALGO = Algo/duplicate.c\
		   Algo/p_a.c\
		   Algo/p_b.c\
		   Algo/r_a.c\
		   Algo/r_b.c\
		   Algo/r_r.c\
		   Algo/r_ra.c\
		   Algo/r_rb.c\
		   Algo/r_rr.c\
		   Algo/s_a.c\
		   Algo/s_b.c\
		   Algo/s_s.c
		   
		   

SRC_ERROR = Error/ft_check_arg1.c\
			Error/ft_check_errors_start.c\
			Error/ft_check_multiple_arg.c\
			Error/verif_double.c\
			Error/compare_to_int.c\
			Error/ft_check_arg1v2.c

SRC_LIST = 	Starting_make_list/convert_lst_into_tab.c\
			Starting_make_list/convert_str_into_tab.c\
			Starting_make_list/define_cmpt.c\
			Starting_make_list/init_list.c\
			Starting_make_list/make_int_tab.c\
			Starting_make_list/nbr_cmpt_lst_multiple.c\
			Starting_make_list/nbr_cmpt_lst.c	  

ALL_SRC = $(SRC_ALGO)\
		  $(SRC_ERROR)\
		  $(SRC_LIST)\
		  $(SRC_TOOLS)\
		  $(SRC_START)\
		  $(SRC_MAIN)


OBJS = $(ALL_SRC:.c=.o)

R_LIBFT = make  -C  Libft

RE_LIBFT = make re -C  Libft

all : $(NAME)

re : clean all

$(NAME) : $(OBJS)
		$(RE_LIBFT)
		@gcc -o $(NAME) $(OBJS) $(LIBFT)
clean :
		@make clean -C Libft
		@rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
	rm -rf Libft/libft.a
