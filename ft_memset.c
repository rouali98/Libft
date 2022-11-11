/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:01:14 by rouali            #+#    #+#             */
/*   Updated: 2022/09/29 19:37:17 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int ch, size_t len)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = s;
	if (len > 0)
	{
		while (i < len)
		{
			p[i] = ch;
			i++;
		}
	}
	return (p);
}
