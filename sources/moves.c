/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:13:27 by vkist-si          #+#    #+#             */
/*   Updated: 2022/10/26 03:38:42 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_swap(t_element **list)
{
	t_element *aux;

	aux = (*list)->next;
	(*list)->next = (*list)->next->next;
	aux->next = *list;
	*list = aux;
}

//pb (push B): Take the first element at the top of A and put it at the top of B. Do nothing if A is empty.
void	do_pushB(t_element **a, t_element **b)
{
	if (!*a)
		return ;
	*b = *a;
	*a = (*a)->next;
}

