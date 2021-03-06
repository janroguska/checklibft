/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 11:53:58 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/22 18:17:52 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*c;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if ((c = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		c[i] = s[start];
		i++;
		start++;
	}
	c[i] = '\0';
	return (c);
}
