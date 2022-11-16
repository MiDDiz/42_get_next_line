/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:19:21 by jnaftana          #+#    #+#             */
/*   Updated: 2022/01/23 12:19:21 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 1024

size_t		gnlft_strlen(const char *str);
void		ft_gnlstrlcpy(char *dest, const char *src, size_t size);
char		*ft_gnlstrchr(const char *s, int c);
void		ft_gnlstrappend(char **s1, const char *s2, size_t len_s2);
void		ft_gnlstrlcat(char *dest, const char *src, size_t size);
char		*get_next_line(int fd);
int			append_last_read(char **line, char **prev_read);
void		read_from_fd(int fd, char **line, char **prev_read);
char		*ft_strdup(const char *src);

#endif