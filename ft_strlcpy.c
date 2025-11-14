/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadrider <hadrider@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:33:56 by hadrider          #+#    #+#             */
/*   Updated: 2025/11/11 12:47:16 by hadrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// #include <string.h>
// int main()
// {
//     const char str[] = "hello nigga";
//     char str1[67];
//     // ft_strlcpy(NULL, str, ft_strlen(str1));
// 	// strlcpy(NULL, str, ft_strlen(str1));
//     //int i = 0;
//     // while (str1[i])
//     // {
//     //     write(1, &str1[i++], 1);
//     // }
// return (0);
// }