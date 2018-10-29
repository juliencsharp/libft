/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juazouz <juazouz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 12:19:58 by juazouz           #+#    #+#             */
/*   Updated: 2018/10/26 18:16:34 by juazouz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_list.h"

/*
*	Crude and unoptimized.
*/

void			ft_sorted_list_merge(t_list **begin_list1,
										t_list *begin_list2,
										int (*cmp)())
{
	ft_list_merge(begin_list1, begin_list2);
	ft_list_sort(begin_list1, cmp);
}