/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 19:36:50 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/05/07 09:44:41 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	o;
	size_t			i;

	o = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (o == ((unsigned char *)s)[i])
		{
			return ((unsigned char *)s + i);
		}
		i++;
	}
	return (0);
}
