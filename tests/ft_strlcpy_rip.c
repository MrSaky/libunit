/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:49:50 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 16:09:49 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	*ft_strmlcpy_rip(char *src, size_t len)
{
	char	*dst;
	char	*ptr;

	dst = malloc(sizeof(char) * (len + 1));
	ptr = dst;
	if (len > 5 && len < 50)
		while (len < 15 && len--)
			*(dst++) = *(src++);
	else if (len <= 5)
		while (len--)
			*(dst++ + 5) = *(src++);
	else if (len >= 50)
		while (len--)
			*(dst++) = '0';
	return (dst - ptr);
}
