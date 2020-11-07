/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/10/19 15:07:17 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** **
**
**  - Создайте функцию, которая отображает все возможные расстановки десяти 
**  ферзей на шахматной доске, которая будет содержать десять столбцов и десять
**  строк, без возможности досягаемости друг друга за один ход, и возвращает 
**  количество возможностей.
**
**  - Рекурсивность должна быть использована.
**
**
**  - Вот как функция должна быть обьявлена:
**
**		int	ft_ten_queens_puzzle(void);
**
**
**  - Вот как это будет отображаться:
--------------------------------------------------------------------------------
    >./a.out | cat -e
    0257948136$
    0258693147$
    ...
    4605713829$
    4609582731$
    ...
    9742051863$
    $>
--------------------------------------------------------------------------------
**
**  - Последовательность идет слева направо. Первая цифра представляет позицию
**  первой ферзя в первом столбце (индекс, начинающийся с 0). N-я цифра 
**  представляет позицию N-й королевы в N-м столбце.
**
**  - Возвращаемое значение должно быть общим количеством отображаемых решений.
**
**
**
** ************************************************************************** */
/* ************************************************************************** */


#define ABS(a, b)	((a >= b) ? (a - b) : (b - a))

void		ft_putchar(char c)
{
	write(1, &c, 1);
}


void		ft_ten_queens_puzzle(void)
{

}