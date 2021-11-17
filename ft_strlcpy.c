/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:03:29 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/08 11:35:11 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	i;

	i = 0;
	s_len = ft_strlen(src);
	if (s_len < dstsize)
		ft_memcpy(dst, src, dstsize);
	else
		ft_memcpy(dst, src, s_len);
	dst[i] = '\0';
	return (dstsize);
}
