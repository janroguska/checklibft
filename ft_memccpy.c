/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 09:33:21 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/22 09:30:46 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstcpy;
	unsigned char	*srccpy;

	dstcpy = (unsigned char*)dst;
	srccpy = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == srccpy[i])
		{
			dstcpy[i] = srccpy[i];
			i++;
			return (dstcpy + i);
		}
		dstcpy[i] = srccpy[i];
		i++;
	}
	return (NULL);
}
