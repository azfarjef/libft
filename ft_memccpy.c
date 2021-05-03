/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 12:13:55 by mahmad-j          #+#    #+#             */
/*   Updated: 2021/04/29 12:33:32 by mahmad-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char			*destptr;
	const char		*srcptr;
	unsigned char	uc;

	destptr = dest;
	srcptr = src;
	uc = (unsigned char)c;
	while (n--)
	{
		*destptr = *srcptr;
		if (uc == *srcptr)
			return (destptr + 1);
		destptr++;
		srcptr++;
	}
	return (0);
}
