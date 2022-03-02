/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:28:45 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/15 16:22:45 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(count * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, (count * size));
	return (mem);
}
// mallocta count çarpı size kadar alan açmamızın sebebi
// her biri için yer açılır toplar isek belirli bir bölmünü alır
// geri kalanına yer açmaz
