/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:43:45 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/06 13:53:23 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*x1;
	unsigned char	*x2;
	size_t			i;

	i = 0;
	x1 = (unsigned char *)s1;
	x2 = (unsigned char *)s2;
	while (i < n && (x1[i] || x2[i]))
	{
		if (x1[i] > x2[i])
			return (1);
		else if (x1[i] < x2[i])
			return (-1);
		i++;
	}
	return (0);
}
// s1 ve s2 deki n kadar karakteri karşılaşır
// eğer eşitse 0 değilse 0 dan farklı bir değer döndürür
// ilk while döngüsünde uzunluk olan sayaç küçükse girilien uzunluktan ve
// x1 yada x2 nulla kadar ise döngüye girer
//int main()
//{
//    char a[] = "yasin";
//    char b[] = "yasin";
//    size_t c = '5';
//    printf("%d",ft_strncmp(a,b,c));
//}
