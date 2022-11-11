/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:10:20 by rouali            #+#    #+#             */
/*   Updated: 2022/10/03 12:10:24 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	ln;

	i = 0;
	if (!s1 && !n)
		return (0);
	if (s2[0] == 0)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		ln = 0;
		while (s1[i + ln] == s2[ln] && (ln + i) < n)
		{
			if (s2[ln + 1] == '\0')
			{
				return ((char *)&s1[i]);
			}
			ln++;
		}
		i++;
	}
	return (0);
}
