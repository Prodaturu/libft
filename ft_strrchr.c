/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 05:05:10 by sprodatu          #+#    #+#             */
/*   Updated: 2023/10/15 22:40:31 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occured;

	last_occured = 0;
	while (*s)
	{
		if (*s == (char)c)
			last_occured = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_occured);
}

/*
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occured = NULL;
	char	*current;

	current = ft_strchr(s, c);
	while (current != NULL)
	{
		last_occured = current;
		current = ft_strchr(current + 1, c);
	}
	return (last_occured);
}
*/