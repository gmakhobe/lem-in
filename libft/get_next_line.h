/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atitus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:50:17 by atitus            #+#    #+#             */
/*   Updated: 2019/09/16 10:07:06 by gmakhobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
# define FD_SIZE 4096

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include "libft.h"

int		get_next_line(const int fd, char **line);

#endif
