/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_bouton(int i, int j, int k)
{
	if ((i > k && i < j) || (i < k && i > j))
		return (i);
	else if ((j > k && j < i) || (j < k && j > i))
		return (j);
	return (k);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */



int ft_bouton(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	if ((j >= i && j <= k) || (j <= i && j >= k))
		return (j);
	if ((k >= j && k <= i) || (k <= j && k >= i))
		return (k);
}



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int	ft_bouton(int i, int j, int k)
{
	if (i > j && i < k)
		return (i);
	if (i > k && i < j)
		return (i);
	if (k > j && k < i)
		return (k);
	if (k > i && k < j)
		return (k);
	if (j > i && j < k)
		return (j);
	if (j > k && j < i)
		return (j);
	if (j == k)
		return (j);
	if (k == i)
		return (k);
	if (j == i)
		return (j);
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	if ((j >= i && j <= k) || (j <= i && j >= k))
		return (j);
	if ((k >= j && k <= i) || (k <= j && k >= i))
		return (k);
	return (0);
}

/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */


int		ft_bouton(int i, int j, int k)
{
	if (j > i && i > k || k > i && i > j)
		return (i);
	else if (i > j && j > k || k > j && j > i)
		return (j);
	else if (i > k && k > j || j > k && k > i)
		return (k);
	else
		return (0);
}


/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */