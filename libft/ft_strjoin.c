/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 06:27:22 by ricosta           #+#    #+#             */
/*   Updated: 2024/07/25 06:27:22 by ricosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		s[len] = s1[len];
		len++;
	}
	i = 0;
	while (s2[i])
	{
		s[len + i] = s2[i];
		i++;
	}
	return (s);
}
