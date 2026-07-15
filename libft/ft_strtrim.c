/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:20 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 15:18:50 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c_inside_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	strt;
	size_t	endz;
	char	*s;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	strt = 0;
	endz = ft_strlen(s1);
	while (s1[strt] != '\0' && ft_c_inside_set(s1[strt], set))
		strt++;
	while (endz > strt && ft_c_inside_set(s1[endz - 1], set))
		endz--;
	s = (char *)malloc(sizeof(char) * (endz - strt + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (strt < endz)
	{
		s[i] = s1[strt];
		i++;
		strt++;
	}
	s[i] = '\0';
	return (s);
}
