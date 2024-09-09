# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yfontene <yfontene@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 11:06:25 by yasmine           #+#    #+#              #
#    Updated: 2024/09/07 10:27:57 by yfontene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


GREEN				=	\033[0;32m
RED					=	\033[0;31m
YELLOW				=	\033[0;33m
MAGENTA				=	\033[0;35m
CYAN				=	\033[0;36m
END					=	\033[0m


NAME	=	Minishell

HEADER	= 	minishell.h
LIBFT	=	libft/libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

PARSER_SRCS=			./src/parser/env_variable.c\
						./src/parser/p_command.c\
						./src/parser/p_dollar.c\
						./src/parser/p_quote.c\
						./src/parser/p_token.c\
						./src/parser/p_token_set.c\
						./src/parser/quote_init.c\
						
UTILS_SRCS=				./src/utils/backslash.c\
						./src/utils/builtin_check.c\
						./src/utils/builtin_export_utils.c\
						./src/utils/builtin_export_utils_error.c\
						./src/utils/create_env.c\
						./src/utils/dollar.c\
						./src/utils/env_handling.c\
						./src/utils/environment.c\
						./src/utils/environmente_set.c\
						./src/utils/erros.c\
						./src/utils/free.c\
						./src/utils/math.c\
						./src/utils/separator_handling.c\
						./src/utils/strings_handling.c\
						./src/utils/syntax_check.c\
						./src/utils/token_handling\
						./src/utils/token_utils.c\
						./src/utils/type_bool.c\

SRCS=					$(UTILS_SRCS)\
						$(PARSER_SRCS)\

OBJS=					$(SRCS:.c=.o)

FLAG=					-lreadline -L/usr/local/opt/readline/lib -I/usr/local/opt/readline/include		
		
$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $(FLAG) $(SRCS) $(HEADER) $(LIBFT) -o $(NAME)
			@echo " $(MAGENTA)																												"
			@echo " 	    ▒                                                                                                ▒              "
			@echo "      ░▒▒░                                                                                              ▓▒▒              "
			@echo "     ░▒▒▒▒░                                                                                           ▒▒▒▒▒              "
			@echo "    ▒▒▒▒▒▒▒                                                                                          ▒▒▒▒▒▒░      		"
			@echo "  ░▒▒▒▒▒▒▒▒  ▒▒     ████     ▒███   ██▒             ██▒          ███                  ██   ██░     ▒▒▒▒▒▒▒▒░  ▓░  		"
			@echo " ░▒▒▒▒▒▒▒▒▒░░▒▒░    ████▒    ████                                ███                  ██   ██░    ▓▒▒▒▒▒▒▒▓▒ ▒▒▒			"
			@echo " ▒▒▒▒▒▒▒░▒▒▒▒▒▒▓    █████   ██░██   ██░  ████████   ██░ ░██████  ████████   ░██████   ██   ██░   ░▒▒▒▒▒▒░░▒▒▒▒▒▒▒ 		"
			@echo " ▒▒▒▒▒▒░░░▒▒▒▒▒▓    ███▒██  ██ ██   ██░  ███   ██░  ██░ ███░     ███   ██▓ ░██   ▓██  ██   ██░   ▒▒▒▒▒▒▒░░░▒▒▒▒▒▒ 		"
			@echo " ▓▒▒▒░▒░░░░▒▒▒▒░    ███ ██ ██  ██   ██░  ██░   ██░  ██░  ░█████  ███   ██▓ ▒████████  ██   ██░    ▒▒▒▒░▒░░░░▒▒▒▒  		"
			@echo "  ▒▒▒░░░░░░░▒▒░     ███ ░███▒  ██   ██░  ██░   ██░  ██░ ░    ██  ███   ██▓  ██▒       ██   ██░     ▒▒▒░░░░░░░▒▒          "
			@echo "    ▒▒░░ ░░▒░       ███  ███   ██   ██░  ██░   ██░  ██░ ██████░  ███   ██▓   ██████░  ██   ██░      ░▒░░░ ░░▒░    $(END)	"
			@echo " $(CYAN)                    			Made by yfontene and josmacha											 $(END)	"

all: $(NAME)
		
.c.o:
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
			@echo "Compiling $<."

$(LIBFT): force
	@$(MAKE) -C libft

force: 
	@true

clean:
			@$(RM) $(OBJS)
			
fclean:		clean
			@$(RM) $(NAME)
			@echo "$(RED)Minishell deleted!$(END)"

re:			fclean all

.PHONY:		all clean fclean re
