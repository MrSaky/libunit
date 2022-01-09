/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athierry <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 00:49:50 by athierry          #+#    #+#             */
/*   Updated: 2022/01/09 01:22:35 by athierry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcpy_rip(char *src, char *dst, size_t len)
{
	char	*ptr;

	ptr = dst;
	while (len--)
	{
		if (len == 8)
			dst += MAX_INT;
		if (len == 10)
			dst += 10;
		*(dst_ptr++) = *(src_ptr++);
	}
	return (dst - ptr);
}
