/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:34:13 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/06 16:28:24 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
//dstsize-1 karakteri src den dst ye kopyalar kopyaladığını değiştirir
// indexleri birbirine eşitleyerek gider
// arttırır sayacı
//sonunda srcsize bastırır
//int    main(void)
//{
//    char    src[] = "yasin";
//    char    dest[] = "ahmet";
//    printf("%ld | %s", ft_strlcpy(dest, src, 3),dest);
//}
// istenilen boyutunu döndürmek 
