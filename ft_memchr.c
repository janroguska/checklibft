/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 18:31:11 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/17 10:12:50 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
//	unsigned char	needle;
	unsigned char	*haystack;

	i= 0;
//	needle = (unsigned char)c;
	haystack = (unsigned char*)s;
	while (i < n)
	{
		if (haystack[i] == (unsigned char)c)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
