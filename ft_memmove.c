/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:04:58 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/21 15:48:38 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*srccpy;
	unsigned char	*dstcpy;

	srccpy = (unsigned char*)src;
	dstcpy = (unsigned char*)dst;
	if (srccpy < dstcpy)
	{
		while (len--)
			dstcpy[len] = srccpy[len];
	}
	else
	{
		while (len--)
			*dstcpy++ = *srccpy++;
	}
	return (dstcpy);
}
