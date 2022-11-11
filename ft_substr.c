/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rouali <rouali@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:26:55 by rouali            #+#    #+#             */
/*   Updated: 2022/10/03 16:26:57 by rouali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	if (!str)
		return (0);
	if (len > ft_strlen(str))
		len = ft_strlen((char *)str) - start;
	if (start >= ft_strlen(str))
	{
		return (ft_strdup(""));
	}
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	i = 0;
	while (str[start + i] != '\0' && len--)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
