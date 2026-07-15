/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkondysi <dkondysi@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:52:48 by dkondysi          #+#    #+#             */
/*   Updated: 2025/12/08 16:39:57 by dkondysi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_one;
	size_t	i;

	if (s == NULL)
		return (NULL);
	new_one = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_one == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_one[i] = f(i, s[i]);
		i++;
	}
	new_one[i] = '\0';
	return (new_one);
}
