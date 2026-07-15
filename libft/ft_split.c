/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:53:43 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 22:47:26 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_searcherer(char const *s, char c)
{
	size_t	searcher;

	searcher = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			searcher++;
			while (*s && *s != c)
				s++;
		}
	}
	return (searcher);
}

char	**ft_split(char const *s, char c)
{
	size_t	lenght;
	char	**result;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	result = malloc(sizeof(char *) * (ft_word_searcherer(s, c) + 1));
	if (result == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			lenght = 0;
			while (*s && *s != c && ++lenght)
				s++;
			result[i] = ft_substr(s - lenght, 0, lenght);
			i++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return (result);
}
