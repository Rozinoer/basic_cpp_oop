NAME = phoneBook

CC = clang++ -g -std=c++98

HEADER = PhoneBook.hpp \
		Contact.hpp \

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp \
		PhoneBook.cpp \
		Contact.cpp \

SRCS = $(SRC)

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	@echo "\n"
	@echo "\033[0;32mCompiling PhoneBook..."
	@$(CC) $(CFLAGS) $(SRCS) -o $(NAME)
	@echo "\n\033[0mDone !"

clean:
	@echo "\nRemoving binaries..."
	@rm -f $(OBJ)
	@echo "\033[0m"

fclean:
	@echo "\033[0;31m\nDeleting objects..."
	@rm -f $(OBJ)
	@echo "\nDeleting executable..."
	@rm -f $(NAME)
	@echo "\nDeleting trash..."
	@rm -f *.txt
	@rm -f *.out
	@echo "\033[0m"

re: fclean all

test: all
	./$(NAME)

norm:
	norminette $(SRC) includes/$(HEADER)

git:
	git add *
	git commit -m "add"
	git push

.PHONY: clean fclean re test norm
