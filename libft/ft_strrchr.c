/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:44:10 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/12 18:04:51 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (((char *)str) + i);
		}
		i--;
	}
	return (NULL);
}
// geriden arama işlemi yapar str girilen string
// c ise aranmasının istenen karakter
// yukarda manuel olarak uzunluk alındı sonra ikici while döngüsü
// sayaç sıfırdan büyükse döngüde
// if e girerse stringi direk yazdırır geri kalanını
// if e girmez ise sayaçı azaltarak karakteri bulmaya çalışır
// sayaç değerim i den küçük ise direk null döndürür.
//int main()
//{
//    char a[] = "yasin";
//    int b = 's';
//    printf("%s",ft_strrchr(a,b));
//}
