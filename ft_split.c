/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoralie <gcoralie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:42:15 by gcoralie          #+#    #+#             */
/*   Updated: 2021/11/13 21:28:20 by gcoralie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	gc_count_words(char const *s, char c);
static char		**gc_free_allocated_array(char **a, size_t len);
static int		gc_final_split(size_t words, char **res, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		words;
	int			ret_val;

	if (s == NULL)
		return (NULL);
	words = gc_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	*(res + words) = NULL;
	ret_val = gc_final_split(words, res, s, c);
	if (ret_val != -1)
		return (gc_free_allocated_array(res, ret_val));
	return (res);
}

static int	gc_final_split(size_t words, char **res, char const *s, char c)
{
	size_t		i;
	char		*entry;
	const char	*s_end;

	s_end = s + ft_strlen(s);
	i = 0;
	while (i < words)
	{
		entry = ft_strchr(s, c);
		if (entry == s++)
			continue ;
		if (entry == NULL || *entry == '\0')
		{
			*(res + i) = ft_substr(s - 1, 0, (s_end - (s - 1)));
			s = s_end;
		}
		else
		{
			*(res + i) = ft_substr(s - 1, 0, (entry - (s - 1)));
			s = entry + 1;
		}
		if (*(res + i++) == NULL)
			return (--i);
	}
	return (-1);
}

static size_t	gc_count_words(char const *s, char c)
{
	size_t		count;
	const char	*s_end;
	char		*entry;

	s_end = s + ft_strlen(s);
	count = 0;
	while (*s != '\0')
	{
		entry = ft_strchr(s, c);
		if (entry == s)
		{
			++s;
			continue ;
		}
		if (entry == NULL || *entry == '\0')
			s = s_end;
		else
			s = entry + 1;
		++count;
	}
	return (count);
}

static char	**gc_free_allocated_array(char **a, size_t len)
{
	size_t	i;

	i = 0;
	while (i <= len)
	{
		free(*(a + i));
		++i;
	}
	free(a);
	return (NULL);
}
