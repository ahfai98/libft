/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:11:24 by jyap              #+#    #+#             */
/*   Updated: 2024/01/05 17:23:29 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	if (count > 4294967295 / size)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	while (i < (count * size))
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}
