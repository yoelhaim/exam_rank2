/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:24:41 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/01/04 18:35:14 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main(int ac , char **av)
{
	if(ac != 3)
		return (0);
	char hash[256] ={0};
	char *s1 = av[1], *s2= av[2];
	while(*s2)
	{
		hash[(int)*s2]= 1;
		s2++;
	}
	while(*s1)
	{
		if(hash[(int)*s1]== 1)
		{
			ft_putchar(*s1);
			hash[(int)*s1]= 0;
		}
		s1++;
	}
}
