/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:22:43 by sel-kham          #+#    #+#             */
/*   Updated: 2021/11/12 01:58:16 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{

	int		i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (char *) s+i;
	if (!c)
		return (char *) s+i;
	return (0);
}
