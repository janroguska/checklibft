/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:58:55 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/23 11:04:46 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = ft_strlen(s1);
	str = (char*)malloc(sizeof(char) * (i + 1));
	if (str != NULL)
	{
		ft_strcpy(str, s1);
		return (str);
	}
	else
		return (NULL);
}
