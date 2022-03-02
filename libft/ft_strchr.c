/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:43:13 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/06 13:43:17 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s++ == '\0')
			return (NULL);
	}
	return ((char *)s);
}
//s ile gösterilen karakter dizisinde c parametresi ile gözterilen değerin
// (unsigned char olarak değerlendirilir) ilk geçtiği yeri arar ve ondan
// sonrasını bastırır
// s nin c ye eşit ise if dögüsüne girer s nin indekslerini birer defa arttırı
// nulla gelinde null döndürür
// ama değildse s yi arttırmaya devam eder
// while döngüsüne girmez veya çıkar ise stringin başından sonuna kadar bastırır
//int main()
//{
//
//    const char c[] = "ahmet";
//    int a = 'm';
//    printf("%s",ft_strchr(c,a));
//
//}
