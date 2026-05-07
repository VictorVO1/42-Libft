/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 09:39:20 by vvalenzu          #+#    #+#             */
/*   Updated: 2026/05/07 10:05:26 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;
	size_t	i;

	if (fd < 0)
		return ;
	nbr = ft_itoa(n);
	i = 0;
	while (nbr[i])
	{
		write(fd, &nbr[i], 1);
		i++;
	}
}
