/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <RTFM@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2020/02/15 10:51:23 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/* ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** 

Assignment name  : options
Expected files   : *.c *.h
Allowed functions: write
--------------------------------------------------------------------------------

Напишите программу, которая принимает неопределенное количество аргументов, 
которые могут рассматриваться как параметры, и записывает на стандартный вывод 
представление этих параметров в виде групп байтов, за которыми следует новая строка.

Опция - это аргумент, который начинается с символа «-» и может содержать несколько 
символов: abcdefghijklmnopqrstuvwxyz

Все параметры хранятся в одном int, и каждый параметр представляет часть этого int 
и должен храниться следующим образом:



00000000 00000000 00000000 00000000
******zy xwvutsrq ponmlkji hgfedcba



Запуск программы без аргументов или с активированным флагом '-h' должен вывести 
использование в стандартном выводе, как показано в следующих примерах.

Неправильная опция должна вывести «Invalid Option», за которой следует новая строка.

Examples :

$>./options
options: abcdefghijklmnopqrstuvwxyz
$>./options -abc -ijk
00000000 00000000 00000111 00000111
$>./options -z
00000010 00000000 00000000 00000000
$>./options -abc -hijk
options: abcdefghijklmnopqrstuvwxyz
$>./options -%
Invalid Option



   ************************************************************************** */
/* ************************************************************************** */
/* ************************************************************************** */



#include <unistd.h>

int main(int ac, char **av)
{
	int i = 1;
	int  t[32] = {0}; 
	int j ;

	if(ac == 1)
	{
		write(1,"options: abcdefghijklmnopqrstuvwxyz\n",36);
		return 0;
	}
	i = 1;
	while (i < ac)
	{
		j = 1;
		if(av[i][0] == '-')
		{
			while(av[i][j] && av[i][j] >= 'a'  && av[i][j] <= 'z')
			{
				if(av[i][j] == 'h')
				{
					write(1,"options: abcdefghijklmnopqrstuvwxyz\n",36);
					return 0;
				}

				t['z' - av[i][j] + 6] = 1;
				j++;
			}

			if (av[i][j])
			{
				write(1,"Invalid Option\n",15);
				return 0;
			}
			j++;
		}
		i++;
	}
	i = 0;
		while (i < 32)
		{
		t[i] = '0' + t[i];
		write(1,&t[i++],1);
			if(i == 32)
				write(1,"\n",1);
			else if(i % 8 == 0)
				write(1," ",1);

		}

	return 0;
}