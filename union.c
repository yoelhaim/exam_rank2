/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   un.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:36:21 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/01/04 18:47:55 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int c, char **av)
{
	char *s1= av[1], *s2= av[2], hash[256] = {0};
	while(*s1)
	{
		if(hash[(int)*s1] == 0)
		{
			ft_putchar(*s1);
			hash[(int)*s1]++;
		}
		s1++;
	}
	while(*s2)
	{
		if(hash[(int)*s2] == 0)
		{
			ft_putchar(*s2);
			hash[(int)*s2]++;

		}
		s2++;
	}

}
