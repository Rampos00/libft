/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:27:38 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/12 14:53:36 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while (i < n - 1)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
	i++;
	}
	return (us1[i] - us2[i]);
}

// bellekte belirlenen 2 stringi n kadar karsilastirir
// eğer fark görürse farkını alıp döndürür aynıysa 0 döndürür
// fark varsa decimal değerleri çıkarıp döndürür
// -1 null nedeniyle
// int main()
//{
//    char s1[] = "yasin";
//    char s2[] = "yasin";
//    printf("%d",ft_memcmp(s1,s2,2));
//
//}
