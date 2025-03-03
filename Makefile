NAME = pipex
NAME_BONUS = pipex_bonus

SRC = src/pipex.c src/utils.c 
OBJ = $(SRC:.c=.o)

SRC_BONUS = src/pipex_bonus.c src/utils_bonus.c
OBJ_BONUS = $(SRC_BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror 
RM = rm -rf

LIBFT = libft
LIB = libft/libft.a 

NONE='\033[0m'
GREEN='\033[32m'
GRAY='\033[2;37m'
CURSIVE='\033[3m'

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME)..." $(NONE)
	@cc $(FLAGS) $(OBJ) $(LIB) -o $(NAME)
	@echo $(GREEN)"- Compiled -"$(NONE)
	@rm $(OBJ)
	@echo $(CURSIVE)$(GRAY) "     Deleted object files" $(NONE)

$(NAME_BONUS): $(OBJ_BONUS) $(LIB)
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME_BONUS)..." $(NONE)
	@cc $(FLAGS) -c src/utils.c 
	@echo $(CURSIVE)$(GRAY) "     - Compiling $(NAME_BONUS)..." $(NONE)
	@cc $(FLAGS) $(OBJ_BONUS) utils.o $(LIB) $(LINKS) -o $(NAME_BONUS)
	@echo $(GREEN)"- Compiled -"$(NONE)
	@rm $(OBJ_BONUS) utils.o 
	@echo $(CURSIVE)$(GRAY) "     Deleted object files" $(NONE)

$(LIBFT):
	@echo $(CURSIVE)$(GRAY) "     - Compiling Libft ..."
	@make -s -C libft
	@echo $(GREEN)"- Libft ready -"

$(OBJ): %.o: %.c
	@echo $(CURSIVE)$(GRAY) "     - Making object files..." $(NONE)
	@cc $(FLAGS) -c $< -o $@

$(OBJ_BONUS): %.o: %.c
	@echo $(CURSIVE)$(GRAY) "     - Making object files..." $(NONE)
	@cc $(FLAGS) -c $< -o $@

clean:
	@echo $(CURSIVE)$(GRAY) "     - Removing object files..." $(NONE)
	$(RM) $(OBJ)
	$(RM) $(OBJ_BONUS)
	$(RM) $(NAME_BONUS)
	@make -s -C libft clean

fclean: clean
	@echo $(CURSIVE)$(GRAY) "     - Removing $(NAME)..." $(NONE)
	$(RM) $(NAME)
	$(RM) $(OBJ_BONUS)
	$(RM) $(NAME_BONUS)
	@make -s -C libft fclean

re: fclean all

bonus: $(LIBFT) $(NAME_BONUS)

.PHONY: all clean fclean re $(LIBFT)