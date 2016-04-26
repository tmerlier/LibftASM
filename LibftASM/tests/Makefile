cc = gcc
ASM = nasm
ASMFLAGS = -f macho64
FLAGS = -Wall -Wextra -Werror
HEADER = includes/
SRCDIR = srcs/
NAME = libfts.a

SRC = ft_isdigit.s \
	  ft_isalpha.s \
	  ft_isascii.s \
	  ft_isprint.s \
	  ft_isalnum.s \
	  ft_toupper.s \
	  ft_tolower.s \
	  ft_strlen.s \
	  ft_strcat.s \
	  ft_bzero.s \
	  ft_puts.s \
	  ft_memset.s \
	  ft_memcpy.s \
	  ft_strdup.s \
	  ft_cat.s \
	  ft_putstr.s \
	  ft_putstr_fd.s \
	  ft_putstr_cyan.s

O_FILES = $(SRC:.s=.o)

STATE = Updated

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(O_FILES)
	@ranlib $(NAME)
	@echo "\033[3;32m$(NAME) Successfully $(STATE)\033[0m"

%.o: $(SRCDIR)%.s
	@$(ASM) $(ASMFLAGS) $< -o $@ -I $(HEADER)
	@ar -rcs $(NAME) $@

test: $(NAME)
	@$(CC) $(FLAGS) $< -o libasm_test tests/main.c -I $(HEADER)

bonus: $(NAME)
	@$(CC) $(FLAGS) $< -o bonus tests/main_bonus.c -I $(HEADER)

clean:
	@rm -f $(O_FILES)

fclean: clean
	@$(eval STATE = Created)
	@rm -f $(NAME) bonus libasm_test

re: fclean all
