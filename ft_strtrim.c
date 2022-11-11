/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:47:33 by rouali            #+#    #+#             */
/*   Updated: 2022/10/04 09:47:34 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	if (s1[i] == '\0')
		return (ft_strdup("\0"));
	if (!s1)
		return (0);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
	{
		i++;
	}
	while (ft_strrchr(set, s1[j - 1]) && j > i)
	{
		j--;
	}
	dest = malloc(sizeof(char) * j - i + 1);
	if (dest)
	{
		ft_strlcpy(dest, &s1[i], j - i + 1);
	}
	return (dest);
}
