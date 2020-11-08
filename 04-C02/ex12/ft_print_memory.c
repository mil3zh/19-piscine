/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlazzare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:09:10 by mlazzare          #+#    #+#             */
/*   Updated: 2020/10/12 18:41:24 by mlazzare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_print_memory(void *addr, unsigned int size)
{
	int i;

	i = 0;
	while (*addr && size != 0)
	{
		while (i <= 16)
		{
			write(1, ':', 1);
			write(1, ' ', 1);
		}
	}
	return (addr);
}