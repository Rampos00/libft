/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:02:33 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/09 16:26:10 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	res = ft_strdup(s);
	if (!res)
		return (NULL);
	while (res[i])
	{
		res[i] = f(i, res[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
//main dosyasında atanan string değeri ve özellikleri tekrar fonksiyona
//sokarak strdup(aynısını geri döndürme) sayesinde fonksiyona geri dönerek
//mainde yapılması istediğimiz işi v.b yazdırma v.b geri döndürü
// hello gönderdik mainde indeleri büyütme varsa HELLO geri döndürür
