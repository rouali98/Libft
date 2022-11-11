/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:18:44 by rouali            #+#    #+#             */
/*   Updated: 2022/10/01 13:18:46 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int searChr)
{
	int				lchar;
	unsigned char	c;

	c = (char)searChr;
	lchar = ft_strlen((char *)str);
	while (lchar >= 0)
	{
		if (str[lchar] == (char)c)
		{
			return ((char *)&str[lchar]);
		}
		lchar--;
	}
	return (0);
}
