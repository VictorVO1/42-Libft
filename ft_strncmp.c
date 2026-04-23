/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvalenzu <vvalenzu@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 09:57:38 by vvalenzu          #+#    #+#             */
/*   Updated: 2025/07/24 15:32:25 by vvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && i < n)
	{
		if (!*s2)
			return (1);
		if (*s2)
		{
			if (*s1 < *s2)
				return (-1);
			else if (*s1 > *s2)
				return (1);
		}
		else
			return (1);
		s1++;
		s2++;
		i++;
	}
	if (!*s1 && *s2)
		return (-1);
	return (0);
}
