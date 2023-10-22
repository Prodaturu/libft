/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:44:10 by sprodatu          #+#    #+#             */
/*   Updated: 2023/10/19 16:24:16 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_string;
	int		start;
	int		end;
	int		length;

	if (!s1 && !set)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1) - 1;
	while ((s1[start]) && (ft_strrchr(set, s1[start])))
		start++;
	while ((end > start) && (ft_strrchr(set, s1[end])))
		end--;
	length = end - start + 1;
	new_string = (char *)malloc(length + 1);
	if (new_string == NULL)
		return (NULL);
	ft_memcpy(new_string, s1 + start, length);
	new_string[length] = '\0';
	return (new_string);
}
