/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <jnaftana@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 12:41:02 by jnaftana          #+#    #+#             */
/*   Updated: 2022/01/23 12:41:02 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

char	*ft_gnlstrchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	if (*str == (unsigned char)c)
		return (str);
	return (NULL);
}

/*
	Generates a new string joining both strings together.
	The resulting string replaces *s1
*/
void	ft_gnlstrappend(char **s1, const char *s2, size_t len_s2)
{
	size_t	s_len;
	char	*new_str;

	s_len = gnlft_strlen(*s1);
	s_len += len_s2;
	new_str = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!new_str)
		return ;
	if (*s1 != NULL)
	{
		ft_gnlstrlcpy(new_str, *s1, gnlft_strlen(*s1) + 1);
		free(*s1);
	}
	else
		new_str[0] = '\0';
	if (s2 != NULL)
		ft_gnlstrlcat(new_str, s2, s_len + 1);
	*s1 = new_str;
	return ;
}

size_t	gnlft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	if (str == NULL)
		return (c);
	while (str[c])
	{
		c++;
	}
	return (c);
}

void	ft_gnlstrlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_n;
	size_t	i;

	dst_n = gnlft_strlen(dst);
	i = 0;
	if (dstsize > (dst_n + 1))
	{
		while (src[i] != '\0' && (dst_n + 1 + i) < dstsize)
		{
			dst[dst_n + i] = src[i];
			i++;
		}
	}
	dst[dst_n + i] = '\0';
}

void	ft_gnlstrlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
		return ;
	if (!dest)
		return ;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ;
}
