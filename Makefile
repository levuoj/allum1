##
## Makefile for Makefile in /home/jouvel_a/rendu/PSU_2015_minitalk
##
## Made by Anthony JOUVEL
## Login   <jouvel_a@epitech.net>
##
## Started on  Mon Feb  1 10:59:20 2016 Anthony JOUVEL
## Last update Fri Feb 19 15:04:24 2016 jouvel_a
##

RM		=	rm -f

CC		=	gcc -o

ALLUM1		=	allum1

BONUS		=	allum1_bonus

LIBMY		=	lib/libmy.a

SRCS_LIB	=	lib/my_printf_flags_1.c \
			lib/my_printf_flags_2.c \
			lib/my_printf_flags_3.c \
			lib/my_putstr_everything.c \
			lib/my_putstr_error.c \
			lib/my_put_nbr_unsigned.c \
			lib/my_putnbr_base_unsigned.c \
			lib/my_putchar.c \
			lib/my_isneg.c \
			lib/my_put_nbr.c \
			lib/my_swap.c \
			lib/my_putstr.c \
			lib/my_strlen.c \
			lib/my_getnbr.c \
			lib/my_sort_int_tab.c \
			lib/my_power_rec.c \
			lib/my_square_root.c \
			lib/my_is_prime.c \
			lib/my_find_prime_sup.c \
			lib/my_strcpy.c \
			lib/my_strncpy.c \
			lib/my_revstr.c \
			lib/my_strstr.c \
			lib/my_strcmp.c \
			lib/my_strncmp.c \
			lib/my_strupcase.c \
			lib/my_strlowcase.c \
			lib/my_strcapitalize.c \
			lib/my_str_isalpha.c \
			lib/my_str_isnum.c \
			lib/my_str_islower.c \
			lib/my_str_isupper.c \
			lib/my_str_isprintable.c \
			lib/my_showstr.c \
			lib/my_showmem.c \
			lib/my_strcat.c \
			lib/my_getnbr_base.c \
			lib/my_putnbr_base.c \
			lib/my_aff_params.c \
			lib/sum_stdarg.c \
			lib/disp_stdarg.c \
			lib/my_printf.c

SRCS_ALLUM1	=	src/my_allum1.c \
			src/my_messages.c \
			src/my_displays_line.c

SRCS_BONUS	=	bonus/my_allum1_bonus.c \
			bonus/my_messages_bonus.c \
			bonus/my_displays_line_bonus.c

OBJS_ALLUM1	=	$(SRCS_ALLUM1:.c=.o)

OBJS_LIB	=	$(SRCS_LIB:.c=.o)

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

CFLAGS		+=	-Wextra -Wall -Werror -g3
CFLAGS		+=	-I include/
#CFLAGS		+=	-ansi -pedantic

all		:	$(LIBMY) $(ALLUM1) $(BONUS)

$(LIBMY)	:	$(OBJS_LIB)
			ar rc $(LIBMY) $(OBJS_LIB)
			ranlib $(LIBMY)

$(ALLUM1)	:	$(OBJS_ALLUM1)
			$(CC) $(ALLUM1) $(OBJS_ALLUM1) $(LIBMY)

$(BONUS)	:	$(OBJS_BONUS)
			$(CC) $(BONUS) $(OBJS_BONUS) $(LIBMY)

clean		:
			$(RM) $(OBJS_ALLUM1)
			$(RM) $(OBJS_LIB)
			$(RM) $(OBJS_BONUS)

fclean		:	clean
			$(RM) $(ALLUM1)
			$(RM) $(LIBMY)

re		:	fclean all

./PHONY		:	all clean fclean re
