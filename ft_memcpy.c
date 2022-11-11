/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:29:25 by rouali            #+#    #+#             */
/*   Updated: 2022/09/30 09:29:28 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*dst;
	unsigned char	*sc;

	i = 0;
	dst = (char *)dest;
	sc = (unsigned char *)src;
	if (!dest && !src)
	{
		return (0);
	}
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dst);
}
