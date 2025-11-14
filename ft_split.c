/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hadrider <hadrider@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:44:19 by hadrider          #+#    #+#             */
/*   Updated: 2025/11/11 10:14:26 by hadrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	**free_all(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	*word_alloc(const char *s, char c, int *i)
{
	char	*str;
	int		l;
	int		j;

	l = *i;
	j = 0;
	while (s[l] && s[l] != c)
		l++;
	str = malloc(l - *i + 1);
	if (!str)
		return (NULL);
	while (*i < l)
		str[j++] = s[(*i)++];
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		w;
	char	**arr;

	if (!s)
		return (NULL);
	i = 0;
	w = 0;
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			arr[w] = word_alloc(s, c, &i);
			if (!arr[w])
				return (free_all(arr));
			w++;
		}
	}
	arr[w] = NULL;
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**tab;
// 	int		i;

// 	tab = ft_split("  hello  world 42  ", ' ');
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("[%s]\n", tab[i]);
// 		i++;
// 	}
// 	return (0);
// }
