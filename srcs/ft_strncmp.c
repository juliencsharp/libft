/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 16:05:09 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:53:25 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	Note : Facultatif
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	c1;
	unsigned int	c2;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		c1 = s1[i];
		c2 = s2[i];
		if (c1 != c2)
		{
			return (c1 - c2);
		}
		i++;
	}
	return (0);
}
