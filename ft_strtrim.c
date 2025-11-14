/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadrider <hadrider@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:38:17 by hadrider          #+#    #+#             */
/*   Updated: 2025/11/08 12:15:04 by hadrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
	{
		trim = ft_calloc(1, 1);
		return (trim);
	}
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (start <= end && ft_strchr(set, s1[end]))
		end--;
	trim = ft_calloc(end - start + 2, 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, end - start + 2);
	return (trim);
}
