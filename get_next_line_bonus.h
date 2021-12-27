/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_bonus.h                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tel-bara <tel-bara@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 12:55:02 by tel-bara      #+#    #+#                 */
/*   Updated: 2020/11/15 16:23:22 by tel-bara      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

typedef struct	s_list
{
	char			buf[BUFFER_SIZE];
	ssize_t			index;
	int				fd;
	ssize_t			bytes_read;
	int				newline_reached;
	int				eob_reached;
	struct s_list	*next;
}				t_list;

int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *s);
char			*ft_gnl_strcat(char **dst, char *src);
void			*ft_memset(void *b, int c, size_t len);

#endif
