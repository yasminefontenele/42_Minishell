# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 14:55:14 by yfontene          #+#    #+#              #
#    Updated: 2023/04/26 14:55:14 by yfontene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN	=	\033[0;32m
RED		=	\033[0;31m
YELLOW	=	\033[0;33m
END		=	\033[0m

CC = cc
CFLAGS	=	-Wall -Wextra -Werror

HEADER	=	libft.h
NAME 	= 	libft.a

SRC 	= 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	  		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
	 		ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
	 		ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
	  		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
	  		ft_putendl_fd.c ft_putnbr_fd.c

BONUS 	= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c\

RM 		=	rm -rf
AR 		= 	ar rcs

OBJ		= 	$(SRC:.c=.o)
OBJ_B	= 	$(BONUS:.c=.o)

all:		$(NAME)

$(NAME): 		$(OBJ)
				@echo "$(YELLOW)Compiling Libft...$(END)"
				$(AR) $(NAME) $(OBJ)
				@echo "$(GREEN)Libft succesfully compiled!$(END)"
						
clean: 		
				@rm -rf $(OBJ)
				@echo "$(RED)Libft objects deleted!$(END)"

fclean: 		clean
				@rm -rf $(NAME)
				@echo "$(RED)Libft lib deleted!$(END)"

re:				fclean	all

bonus:			$(NAME) $(OBJ_B)
				@echo "$(YELLOW)Compiling Libft bonus...$(END)"
				$(AR) $(NAME) $(OBJ_B)
				@echo "$(GREEN)Libft bonus succesfully compiled!$(END)"

author: 
				@echo "$(GREEN)'yfontene'$(END)"

.PHONY:			all clean fclean re bonus
