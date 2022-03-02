/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:39:51 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/10 17:38:25 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src)
		return (dest);
	else if (dest < src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		d = (unsigned char *)dest;
		s = (const unsigned char *)src;
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}
//memmove memcpy ile neredeyse aynıdır fark sondan kontrol ederek
//çakışma yapmaz
//ama memcpy de farklıdır
//kopyalanacak yer ile kopyalancak karakter eşit ise desti geri döndürü
//#include <stdio.h>
//int main()
//{
//      char dest[] = "ali";
//    char src[] = "mehmet";
//   
// 
//    printf("%s",ft_memmove(dest,src,2));
//}
//son while döngüsünde geriden alır
//son hali return eder
