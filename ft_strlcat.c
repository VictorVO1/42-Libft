/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:27:03 by vvalenzu          #+#    #+#             */
/*   Updated: 2025/07/24 10:59:14 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	con;

	con = 0;
	while (*str != '\0')
	{
		con++;
		str++;
	}
	return (con);
}

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
