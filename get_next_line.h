/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 19:06:55 by lsoghomo          #+#    #+#             */
/*   Updated: 2021/02/22 19:06:57 by lsoghomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif
# ifndef ARRAY_MAX_SIZE
#  define ARRAY_MAX_SIZE 4096
# endif

typedef struct	s_struct
{
	int		i;
	int		a;
	char	*temp;
	int		ret;
	int		return_number;
	char	*buffer;
}				t_struct;

int				get_next_line(int fd, char **line);
char			*ft_strjoin(char *s1, char const *s2);
char			*ft_strdup(const char *s);
size_t			ft_strlen(const char *s);
char			*ft_strchr(const char *str, int c);

#endif
