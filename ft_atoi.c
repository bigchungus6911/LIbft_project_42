/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadrider <hadrider@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:09:55 by hadrider          #+#    #+#             */
/*   Updated: 2025/11/12 15:07:26 by hadrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_sign(const char *s, int *i)
{
	int	sign;

	sign = 1;
	if (s[*i] == '-')
	{
		sign = -sign;
		(*i)++;
	}
	else if (s[*i] == '+')
		(*i)++;
	return (sign);
}

int	ft_atoi(const char *str)
{
	long	n;
	int		sign;
	int		i;

	n = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sign = check_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (n > 922337203685477580 || (n == 922337203685477580 && (str[i]
					- '0') > 7))
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(n * sign));
}
// int main ()
// {
// 	int i = 5;
// 	printf("%d",i--);
// 	// printf("%--d",ft_atoi("-2147483648"));
// 	// printf("\n");
// 	// printf("%d", atoi("9223372036854775810"));
// }