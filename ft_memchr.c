/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:43:03 by rouali            #+#    #+#             */
/*   Updated: 2022/10/01 14:43:08 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *mb, int sc, size_t size)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = mb;
	while (i < size)
	{
		if (str[i] == (unsigned char)sc)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
