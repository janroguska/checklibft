/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroguszk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 15:50:30 by jroguszk          #+#    #+#             */
/*   Updated: 2017/11/21 15:57:45 by jroguszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		count_words(char const *s, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[j])
	{
		i++;
		while (s[j] == c && s[j] != '\0')
			j++;
		while (s[j] != c && s[j] != '\0')
			j++;
	}
	return (i);
}

static	char	*make_words(char const *s, char c, char **a)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (s[j])
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		k = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		l = j - k;
		a[i] = ft_strsub(s, k, l);
		i++;
	}
	return (*a);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**a;

	if (s == NULL)
		return (NULL);
	i = count_words(s, c);
	a = (char**)malloc(sizeof(a) * (i + 1));
	if (a == NULL)
		return (NULL);
	make_words(s, c, a);
	return (a);
}
