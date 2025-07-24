/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aacasado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 13:46:21 by aacasado          #+#    #+#             */
/*   Updated: 2025/07/15 13:16:46 by aacasado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char a)
{
	write(1, &a, 1);
}

void	print_number(int num)
{
	put_char((num / 10) + '0');
	put_char((num % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			print_number(num1);
			put_char(' ');
			print_number(num2);
			if (!(num1 == 98 && num2 == 99))
			{
				put_char(',');
				put_char(' ');
			}
			num2++;
		}
		num1++;
	}
}
