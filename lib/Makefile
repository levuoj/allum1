##
## Makefile for Makefile in /home/jouvel_a/Downloads
##
## Made by Anthony JOUVEL
## Login   <jouvel_a@epitech.net>
##
## Started on  Mon Oct 12 11:23:18 2015 Anthony JOUVEL
## Last update Mon Feb  1 13:14:20 2016 Anthony JOUVEL
##

CFLAGS   += -Wextra -Wall -Werror
CFLAGS  += -I.

RM	= rm -f

NAME	= libmy.a

SRCS	= my_printf_flags_1.c \
	  my_printf_flags_2.c \
	  my_printf_flags_3.c \
	  my_putstr_everything.c \
	  my_putstr_error.c \
	  my_put_nbr_unsigned.c \
	  my_putnbr_base_unsigned.c \
	  my_putchar.c \
	  my_isneg.c \
	  my_put_nbr.c \
	  my_swap.c \
	  my_putstr.c \
	  my_strlen.c \
	  my_getnbr.c \
	  my_sort_int_tab.c \
	  my_power_rec.c \
	  my_square_root.c \
	  my_is_prime.c \
	  my_find_prime_sup.c \
	  my_strcpy.c \
	  my_strncpy.c \
	  my_revstr.c \
	  my_strstr.c \
	  my_strcmp.c \
	  my_strncmp.c \
	  my_strupcase.c \
	  my_strlowcase.c \
	  my_strcapitalize.c \
	  my_str_isalpha.c \
	  my_str_isnum.c \
	  my_str_islower.c \
	  my_str_isupper.c \
	  my_str_isprintable.c \
	  my_showstr.c \
	  my_showmem.c \
	  my_strcat.c \
	  my_getnbr_base.c \
	  my_putnbr_base.c \
	  my_aff_params.c \
	  sum_stdarg.c \
	  disp_stdarg.c \
	  my_printf.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc libmy.a $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

./PHONY: all clean flcean re
