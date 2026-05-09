/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 22:21:52 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/05/07 09:43:56 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	fill_num(char *num, long nb, int len)
{
	while (nb > 0)
	{
		num[len--] = ((nb % 10) + '0');
		nb /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	long	nb;

	nb = n;
	len = num_len(nb);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (nb == 0)
	{
		num[0] = '0';
		return (num);
	}
	if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	len--;
	fill_num(num, nb, len);
	return (num);
}
