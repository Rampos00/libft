/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:37:49 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/09 10:11:09 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	s2_len;

	i = 0;
	s2_len = ft_strlen(s2);
	if (!s2_len)
		return ((char *)s1);
	if (n != 0)
	{
		while (s1[i] && i <= n - s2_len)
		{
			j = 0;
			while (s2[j] && s2[j] == s1[i + j])
				j++;
			if (j == s2_len)
				return ((char *)&s1[i]);
			i++;
		}
	}
	return (NULL);
}
// s1 in içinde s2 yi bulursa ve girilen değer n kadar sözcüğün
// sözcüğün içinde ise girilen sözcükten sonrasını bastırır
//eğer herhangi bir bulunması istenen karakter girilmedi ise
//s1 i char olarak geri döndürür
//char olmasının sebebi return değeri char (başlık char)
//n - s2_len max değer ulaşabilek içi eğer
// koymaz isek devam eder sistem bozlur
//s2[j] == s1[i + j] eşitliği kontrol etmek için yapıyoruz
//j miz s2 len kadarına ulaşınca s1 in yeni halini bastırır
//int main()
//{
//   char a[] = "ahmet";
//   char b[] = "hm";
//   printf("%s",ft_strnstr(a,b,3));
//}
