/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:47:21 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/05/07 09:57:18 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	o;
	int		i;

	o = c;
	i = ft_strlen(s);
	while (i--)
	{
		if (o == s[i])
		{
			return ((char *)&s[i]);
		}
	}
	if (o == *s)
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}
