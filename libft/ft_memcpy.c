/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:59:20 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/12 15:03:40 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	if (!dest && !src)
		return (0);
	str1 = dest;
	str2 = src;
	while (n-- > 0)
	{
		*str1++ = *str2++;
	}
	return (dest);
}

// src'yi dest'e kopyalar fakat çakışmalar olabilir
