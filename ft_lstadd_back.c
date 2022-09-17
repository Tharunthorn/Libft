/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:04:49 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/17 15:04:52 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	if (lst[0])
	{
		tmp = ft_lstlast(lst[0]);
		tmp -> next = new;
	}
	else
		lst[0] = new;
}