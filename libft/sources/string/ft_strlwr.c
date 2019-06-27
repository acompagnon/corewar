/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlwr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dieu <tle-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 20:27:16 by tle-dieu          #+#    #+#             */
/*   Updated: 2019/04/20 20:27:19 by tle-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlwr(char *str)
{
	char *s;

	s = str;
	while (*s)
	{
		*s = (*s >= 'A' && *s <= 'Z') ? *s + 32 : *s;
		s++;
	}
	return (str);
}
