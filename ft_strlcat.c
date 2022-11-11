/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:07:00 by rouali            #+#    #+#             */
/*   Updated: 2022/10/01 12:07:02 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	ldst = ft_strlen(dest);
	lsrc = ft_strlen(src);
	if (destsize < ldst + 1)
		return (destsize + lsrc);
	if (destsize > ldst + 1)
	{
		while (src[i] != '\0' && ldst + i + 1 < destsize)
		{
			dest[ldst + i] = src[i];
			i++;
		}
	}
	dest[ldst + i] = 0;
	return (ldst + lsrc);
}
