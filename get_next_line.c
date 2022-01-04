/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newl.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelhaim <yoelhaim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 18:52:34 by yoelhaim          #+#    #+#             */
/*   Updated: 2022/01/04 19:14:18 by yoelhaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

char *dua (char *str)
{
	int len =0;
	char *mall;
	if(!str)
		return (NULL);
	while(str[len])
		len++;
	mall = malloc(len +1);
	if(!mall)
		return NULL;
	int i = -1;
	while(++i < len)
	{
		mall[i] = str[i];
	}
	mall[i] = 0;
	return(mall);
}
char *nl(int fd)
{
	char heap[7000000]= {0}, buff;
	int i =0,  nbyte = 0;
	while((nbyte = read(fd, &buff, 1)) && nbyte > 0)
	{
		heap[i++] = buff;
		if(buff== '\n')
			break;

	}
	heap[i] = 0;
	if(nbyte < 1 && i == -0)
		return 0;
	return (dua(heap));
}
int main()
{
	int fd = open("t.txt", O_RDONLY);
	printf("%s", nl(fd));
}
