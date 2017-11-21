/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 13:04:58 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/21 11:51:28 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*srccpy;
	unsigned char	*dstcpy;
	unsigned char	temp[len + 1];

	i = 0;
	srccpy = (unsigned char*)src;
	dstcpy = (unsigned char*)dst;
	while (i < len)
	{
		temp[i] = srccpy[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		dstcpy[i] = temp[i];
		i++;
	}
	return (dstcpy);
}
