/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:30:17 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/21 13:47:30 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i])
	{
		while ((haystack[i + j] == needle[j]) && (i + j < len) && (needle[j]))
			j++;
		if (needle[j] == '\0')
			return ((char*)haystack + i);
		else
		{
			j = 0;
			i++;
		}
	}
	return (0);
}
