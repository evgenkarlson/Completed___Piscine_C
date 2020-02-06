/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 12:32:59 by exam              #+#    #+#             */
/*   Updated: 2017/07/20 15:42:07 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(str[0]);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int	l;
	int i;

	i = 0;
	l = 0;
	while (tab[l] != '\0')
		l++;
	while (i < l)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
}
