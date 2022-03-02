/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:00:39 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/10 16:04:38 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*yer;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && checker(s1[i], set))
		i++;
	while (j > i && checker(s1[j - 1], set))
		j--;
	yer = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!yer)
		return (NULL);
	while (i < j)
		yer[k++] = s1[i++];
	yer[k] = '\0';
	return (yer);
}
// baştan ve sondan kısar
//
//int main()
//{
//    char a[] = "tamam.ahmet";
//    char b[] = "t";
//    printf("%s",ft_strtrim(a,b));
//}
// j>i nedeni önden ve arkadan gelen sayaçların çakışmaması için
