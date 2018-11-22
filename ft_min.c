/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 16:30:33 by juazouz           #+#    #+#             */
/*   Updated: 2018/11/20 16:31:53 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_min(int *ptr, int size)
{
	int	i;
	int	min;

	if (size == 0)
		return (0);
	min = ptr[0];
	i = 1;
	while (i < size)
	{
		if (ptr[i] < min)
			min = ptr[i];
		i++;
	}
	return (min);
}