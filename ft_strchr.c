/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:59:12 by rouali            #+#    #+#             */
/*   Updated: 2022/10/01 12:59:26 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searChr)
{
	int				i;
	unsigned char	c;

	c = (char)searChr;
	i = 0;
	while (str[i] && str[i] != (char)c)
	{
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	else
		return (0);
}
