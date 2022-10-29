/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:26:58 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/28 01:38:55 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void do_reverse_rotate(t_element **list)
{
	t_element *aux;
	t_element *last;

	aux = *list;
	while (aux->next->next)
		aux = aux->next;
	last = ft_lstlast(*list);
	last->next = *list;
	*list = last;
	aux->next = NULL; 
}