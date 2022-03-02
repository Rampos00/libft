/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytanis <ytanis@student.42kocaeli.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:32:43 by ytanis            #+#    #+#             */
/*   Updated: 2022/02/06 15:51:46 by ytanis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			n;

	n = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n = -1;
	str++;
	}
	while (*str != 0 && *str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0') * n;
		if (num > 21474483647)
			return (-1);
		if (num < -2147483648)
			return (0);
		str++;
	}
	return (num);
}
// char dan int e değerleri çeviri
// n değeri basşındaki + - liği kontrol eder
// son while döngüsünde ise örn "123" değerini tek
// sayıların indirir "1","2","3" şeklinde ve ona göre ascii
//değerlerinden çıkartıp int değere çevirir
//
//int main()
//{
//     char a[] ="123";
//    printf("%d",ft_atoi(a));
//}
