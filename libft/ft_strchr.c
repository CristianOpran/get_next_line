/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 20:11:56 by copran            #+#    #+#             */
/*   Updated: 2018/01/06 20:11:58 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	char	locate;

	locate = c;
	ptr = (char*)s;
	while (*ptr)
	{
		if (*ptr == locate)
			return (ptr);
		ptr++;
	}
	if (*ptr == locate)
		return (ptr);
	else
		return (NULL);
}
