/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** *
 *
 * 
 *	• Создайте функцию "ft_list_clear", которая удаляет все ссылки из списка.
 *	
 *
 *	• Затем он присвоит указателю списка значение null.
 *
 * 
 *	• Вот как эта функция должна быть объявлена :
 *
 *									void	ft_list_clear(t_list **begin_list);
 * 
 * 
 * ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		if (list->next)
			tmp = list->next;
		else
			tmp = ((void *)0);
		free(list);
		list = tmp;
	}
	*begin_list = ((void *)0);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*begin_list = ((void *)0);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */