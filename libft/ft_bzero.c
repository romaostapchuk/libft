/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostapch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:12:04 by rostapch          #+#    #+#             */
/*   Updated: 2016/11/22 14:05:32 by rostapch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t nb)
{
	unsigned char *chr;

	chr = (unsigned char *)str;
	while (nb >= 1)
	{
		*chr++ = '\0';
		nb--;
	}
}
