# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmakhobe <gmakhobe@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/18 21:30:03 by gmakhobe          #+#    #+#              #
#    Updated: 2020/05/18 21:37:18 by gmakhobe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS			= -Wall -Werror -Wextra
LEM_IN			= lem_in

SRC_DIR				= src/a_dijkstra.c \
				      src/analyze_map_data.c \
				      src/dijkstra_helper.c \
				      src/find_info.c \
				      src/find_path.c \
				      src/find_turn.c \
				      src/ft_board_Size.c \
				      src/ft_clear_data.c \
				      src/ft_connections_to_the_rooms.c \
				      src/ft_free_memory.c \
				      src/ft_negative.c \
				      src/ft_print_out_ln.c \
				      src/ft_print_out.c \
				      src/ft_read_connection.c \
				      src/ft_read_connections.c \
				      src/ft_resolve_connection.c \
				      src/ft_room_name.c \
				      src/ft_space.c \
				      src/handle_ant_data.c \
				      src/handle_line_data.c \
				      src/helpers.c \
				      src/ignore_comments_and_commands.c \
				      src/is_link.c \
				      src/locate.c \
				      src/resolve_info.c \
				      src/resolve_room.c \
				      src/resolve_rooms.c \
				      src/run_a_dijkstra.c \
				      src/set_path.c \
					  src/ft_remove_list.c \
					  src/ft_lstcpy.c \
					  src/get_listsize.c \
					  src/get_cmd.c \

LEM_IN_DIR		= src/lem-in.c
LEM_HEADER_DIR	= includes/lem_in.h

all: $(LEM_IN)

$(LEM_IN):
	make re -C libft/
	gcc $(FLAGS) $(SRC_DIR) $(LEM_IN_DIR) libft/libft.a -o $(LEM_IN)

clean:
	make clean -C libft/

fclean:
	make fclean -C libft/
	rm -f $(LEM_IN)

re: fclean all