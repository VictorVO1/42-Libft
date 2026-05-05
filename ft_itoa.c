/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 22:21:52 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/05/04 22:21:52 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;

	if(n == INT_MIN)
		return (strdup("-2147483648"));
	
	len = num_len(n);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	
	num[len] = '\0';
	if (n == 0)
	{
		num[0] = '0';
		return (num);
	}
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
	}
	len--;
	while (n)
	{
		num[len] = ((n % 10) + '0');
		n /= 10;
		len--;
	}
	return (num);
}