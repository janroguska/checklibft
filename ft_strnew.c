/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 09:42:31 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/22 10:30:46 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (char*)ft_memalloc(size + 1);
	if (c == NULL)
		return (NULL);
	while (i < size + 1)
	{
		c[i] = '\0';
		i++;
	}
	return (c);
}
