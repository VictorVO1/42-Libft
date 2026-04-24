/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:27:03 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/04/24 11:41:49 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dsize;
	unsigned int	ret;

	dsize = ft_strlen(dest);
	if (dsize >= size)
		ret = size + ft_strlen(src);
	else
	{
		ret = ft_strlen(src) + dsize;
		i = 0;
		while (dsize < size - 1 && src[i] != '\0')
		{
			dest[dsize] = src[i];
			i++;
			dsize++;
		}
		dest[dsize] = '\0';
	}
	return (ret);
}
