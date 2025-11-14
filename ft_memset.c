/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadrider <hadrider@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:22:14 by hadrider          #+#    #+#             */
/*   Updated: 2025/11/12 14:39:29 by hadrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (b);
}
// int main()
// {
// 	int x;

// 	// 00000000000000000000010100111001
// 	ft_memset(&x, 0, 4);
// 	ft_memset(&x, 0b00000101, 2);
// 	ft_memset(&x, 0b00111001, 1);
// 	printf("%d", x);
// }