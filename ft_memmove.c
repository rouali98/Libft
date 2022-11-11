/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:43:27 by rouali            #+#    #+#             */
/*   Updated: 2022/10/06 23:28:31 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ldest;
	unsigned char	*lsrc;

	if (dest == src || n == 0)
		return (dest);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else
	{
		ldest = (unsigned char *)dest;
		lsrc = (unsigned char *)src;
		while (n--)
		{
			ldest[n] = lsrc[n];
		}
	}
	return (dest);
}
