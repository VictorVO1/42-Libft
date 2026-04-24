/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:59:09 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/04/24 12:34:09 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	o;

	o = c;
	while (*s)
	{
		if (o == *s)
		{
			return ((char *)s);
		}
		s++;
	}
	if (o == *s)
	{
		return ((char *)s);
	}
	return (NULL);
}
